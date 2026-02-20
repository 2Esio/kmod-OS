#include <linux/init.h>
#include <linux/module.h>
#include <linux/cred.h>
#include <linux/sched.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("2Esio");
MODULE_DESCRIPTION("Log que muestra PDI");
MODULE_VERSION("1.0");

static int __init whoami_init(void)
{
	const struct cred *cred = current_cred();
	pr_info("whoami_log: cargado por  PID=%d COMM=%s EUID=%u EGID=%u\n",
			current->pid, current->comm,
			__kuid_val(cred->euid), __kgid_val(cred->egid));
	return 0;
}

static void __exit whoami_exit(void)
{
	pr_info("whoami_log: descargando modulo\n");
}

module_init(whoami_init);
module_exit(whoami_exit);
