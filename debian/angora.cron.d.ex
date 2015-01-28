#
# Regular cron jobs for the angora package
#
0 4	* * *	root	[ -x /usr/bin/angora_maintenance ] && /usr/bin/angora_maintenance
