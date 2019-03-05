/* Generated file - do not edit. */

#include <stddef.h>
#include "sys_config.h"

const struct mgos_conf_entry sys_config_schema_[73] = {
  {.type = CONF_TYPE_OBJECT, .key = "", .num_desc = 72},
  {.type = CONF_TYPE_OBJECT, .key = "sntp", .num_desc = 5},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct sys_config, sntp.enable)},
  {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct sys_config, sntp.server)},
  {.type = CONF_TYPE_INT, .key = "retry_min", .offset = offsetof(struct sys_config, sntp.retry_min)},
  {.type = CONF_TYPE_INT, .key = "retry_max", .offset = offsetof(struct sys_config, sntp.retry_max)},
  {.type = CONF_TYPE_INT, .key = "update_interval", .offset = offsetof(struct sys_config, sntp.update_interval)},
  {.type = CONF_TYPE_OBJECT, .key = "wifi", .num_desc = 22},
  {.type = CONF_TYPE_OBJECT, .key = "sta", .num_desc = 8},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct sys_config, wifi.sta.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct sys_config, wifi.sta.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct sys_config, wifi.sta.pass)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct sys_config, wifi.sta.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct sys_config, wifi.sta.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct sys_config, wifi.sta.gw)},
  {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct sys_config, wifi.sta.nameserver)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct sys_config, wifi.sta.dhcp_hostname)},
  {.type = CONF_TYPE_OBJECT, .key = "ap", .num_desc = 12},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct sys_config, wifi.ap.enable)},
  {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct sys_config, wifi.ap.ssid)},
  {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct sys_config, wifi.ap.pass)},
  {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct sys_config, wifi.ap.hidden)},
  {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct sys_config, wifi.ap.channel)},
  {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct sys_config, wifi.ap.max_connections)},
  {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct sys_config, wifi.ap.ip)},
  {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct sys_config, wifi.ap.netmask)},
  {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct sys_config, wifi.ap.gw)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct sys_config, wifi.ap.dhcp_start)},
  {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct sys_config, wifi.ap.dhcp_end)},
  {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct sys_config, wifi.ap.keep_enabled)},
  {.type = CONF_TYPE_OBJECT, .key = "device", .num_desc = 2},
  {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct sys_config, device.id)},
  {.type = CONF_TYPE_STRING, .key = "password", .offset = offsetof(struct sys_config, device.password)},
  {.type = CONF_TYPE_OBJECT, .key = "debug", .num_desc = 8},
  {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct sys_config, debug.udp_log_addr)},
  {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct sys_config, debug.mbedtls_level)},
  {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct sys_config, debug.level)},
  {.type = CONF_TYPE_STRING, .key = "filter", .offset = offsetof(struct sys_config, debug.filter)},
  {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct sys_config, debug.stdout_uart)},
  {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct sys_config, debug.stderr_uart)},
  {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct sys_config, debug.factory_reset_gpio)},
  {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct sys_config, debug.mg_mgr_hexdump_file)},
  {.type = CONF_TYPE_OBJECT, .key = "sys", .num_desc = 1},
  {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct sys_config, sys.wdt_timeout)},
  {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct sys_config, conf_acl)},
  {.type = CONF_TYPE_OBJECT, .key = "http", .num_desc = 9},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct sys_config, http.enable)},
  {.type = CONF_TYPE_STRING, .key = "listen_addr", .offset = offsetof(struct sys_config, http.listen_addr)},
  {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct sys_config, http.ssl_cert)},
  {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct sys_config, http.ssl_key)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct sys_config, http.ssl_ca_cert)},
  {.type = CONF_TYPE_STRING, .key = "upload_acl", .offset = offsetof(struct sys_config, http.upload_acl)},
  {.type = CONF_TYPE_STRING, .key = "hidden_files", .offset = offsetof(struct sys_config, http.hidden_files)},
  {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct sys_config, http.auth_domain)},
  {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct sys_config, http.auth_file)},
  {.type = CONF_TYPE_OBJECT, .key = "rpc", .num_desc = 17},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct sys_config, rpc.enable)},
  {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct sys_config, rpc.max_frame_size)},
  {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct sys_config, rpc.max_queue_length)},
  {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct sys_config, rpc.default_out_channel_idle_close_timeout)},
  {.type = CONF_TYPE_OBJECT, .key = "ws", .num_desc = 7},
  {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct sys_config, rpc.ws.enable)},
  {.type = CONF_TYPE_STRING, .key = "server_address", .offset = offsetof(struct sys_config, rpc.ws.server_address)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_min", .offset = offsetof(struct sys_config, rpc.ws.reconnect_interval_min)},
  {.type = CONF_TYPE_INT, .key = "reconnect_interval_max", .offset = offsetof(struct sys_config, rpc.ws.reconnect_interval_max)},
  {.type = CONF_TYPE_STRING, .key = "ssl_server_name", .offset = offsetof(struct sys_config, rpc.ws.ssl_server_name)},
  {.type = CONF_TYPE_STRING, .key = "ssl_ca_file", .offset = offsetof(struct sys_config, rpc.ws.ssl_ca_file)},
  {.type = CONF_TYPE_STRING, .key = "ssl_client_cert_file", .offset = offsetof(struct sys_config, rpc.ws.ssl_client_cert_file)},
  {.type = CONF_TYPE_OBJECT, .key = "uart", .num_desc = 4},
  {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct sys_config, rpc.uart.uart_no)},
  {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct sys_config, rpc.uart.baud_rate)},
  {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct sys_config, rpc.uart.fc_type)},
  {.type = CONF_TYPE_BOOL, .key = "wait_for_start_frame", .offset = offsetof(struct sys_config, rpc.uart.wait_for_start_frame)},
};

const struct mgos_conf_entry *sys_config_schema() {
  return sys_config_schema_;
}
