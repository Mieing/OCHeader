@interface MMNetworkStatistics : NSObject

@property (nonatomic) unsigned long long wifiSent;
@property (nonatomic) unsigned long long wifiReceived;
@property (nonatomic) unsigned long long wwanSent;
@property (nonatomic) unsigned long long wwanReceived;

- (unsigned long long)totalWifiUsage;
- (unsigned long long)totalWwanUsage;
- (id)diff:(id)a0;
- (void)add:(id)a0;
- (void)divideBySeconds:(unsigned long long)a0;

@end
