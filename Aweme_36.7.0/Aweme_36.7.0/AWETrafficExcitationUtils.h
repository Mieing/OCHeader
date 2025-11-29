@interface AWETrafficExcitationUtils : NSObject

@property (nonatomic) long long lastState;
@property (nonatomic) BOOL trafficExcitationStatus;
@property (nonatomic) unsigned long long targetISPType;
@property (nonatomic) unsigned long long targetNetworkType;

+ (id)sharedInstance;

- (void)onNetworkChanged:(id)a0;
- (unsigned long long)carrierType;
- (unsigned long long)currentCarrierNetworkType;
- (void)trafficExcitation;
- (id)init;

@end
