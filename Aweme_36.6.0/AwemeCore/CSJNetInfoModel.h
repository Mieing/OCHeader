@class NSString;

@interface CSJNetInfoModel : NSObject

@property (copy) NSString *csj_IP;
@property (copy) NSString *csj_IPv4;
@property (copy) NSString *csj_IPv6;
@property (copy) NSString *csj_wifi_bssid;

- (id)ipv4InfoStr;
- (id)ipv6InfoStr;
- (void)updateWithIP:(id)a0;
- (void)updateWithIPv4:(id)a0;
- (void)updateWithIPv6:(id)a0;
- (void)updateWithWiFiBSSID:(id)a0;
- (id)ipInfoStr;
- (id)wifiBSSIDInfoStr;
- (id)applogNetInfoCustom;
- (void).cxx_destruct;

@end
