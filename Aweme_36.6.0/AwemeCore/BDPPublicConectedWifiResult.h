@class NSString, NSNumber;

@interface BDPPublicConectedWifiResult : NSObject

@property (copy, nonatomic) NSString *SSID;
@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) NSNumber *secure;
@property (copy, nonatomic) NSNumber *signalStrength;

- (void).cxx_destruct;

@end
