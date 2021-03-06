/* The following definitions are auto-generated from monitor_iface.xml */

#include "util/util.h"
#include "sbus/sssd_dbus.h"
#include "sbus/sssd_dbus_meta.h"
#include "monitor_iface_generated.h"

/* methods for org.freedesktop.sssd.monitor */
const struct sbus_method_meta mon_srv_iface__methods[] = {
    {
        "getVersion", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_srv_iface, getVersion),
    },
    {
        "RegisterService", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_srv_iface, RegisterService),
    },
    { NULL, }
};

/* interface info for org.freedesktop.sssd.monitor */
const struct sbus_interface_meta mon_srv_iface_meta = {
    "org.freedesktop.sssd.monitor", /* name */
    mon_srv_iface__methods,
    NULL, /* no signals */
    NULL, /* no propetries */
};

/* methods for org.freedesktop.sssd.service */
const struct sbus_method_meta mon_cli_iface__methods[] = {
    {
        "ping", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_cli_iface, ping),
    },
    {
        "resInit", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_cli_iface, resInit),
    },
    {
        "shutDown", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_cli_iface, shutDown),
    },
    {
        "goOffline", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_cli_iface, goOffline),
    },
    {
        "resetOffline", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_cli_iface, resetOffline),
    },
    {
        "rotateLogs", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_cli_iface, rotateLogs),
    },
    {
        "clearMemcache", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_cli_iface, clearMemcache),
    },
    {
        "clearEnumCache", /* name */
        NULL, /* no in_args */
        NULL, /* no out_args */
        offsetof(struct mon_cli_iface, clearEnumCache),
    },
    { NULL, }
};

/* interface info for org.freedesktop.sssd.service */
const struct sbus_interface_meta mon_cli_iface_meta = {
    "org.freedesktop.sssd.service", /* name */
    mon_cli_iface__methods,
    NULL, /* no signals */
    NULL, /* no propetries */
};
