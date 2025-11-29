@class CLLocation;

@interface TencentLBSWifiLocation : NSObject

@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) int wlanUse;

- (id)init;
- (BOOL)isWifiLocationValid;
- (id)description;
- (void).cxx_destruct;

@end
