@class NSString;

@interface BDUGLocationWiFiInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) NSString *SSID;
@property (nonatomic, getter=isSecure) BOOL secure;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
