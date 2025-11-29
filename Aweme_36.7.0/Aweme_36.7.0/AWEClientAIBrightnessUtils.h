@class NSDictionary;

@interface AWEClientAIBrightnessUtils : NSObject

@property (retain, nonatomic) NSDictionary *hourStats;
@property (nonatomic) long long hourUpdateTime;
@property (nonatomic) long long currentHour;
@property (nonatomic) double indoorMax;
@property (nonatomic) long long statType;

+ (id)sharedInstance;

- (void)updateCurTimes;
- (float)pri_determineAmbientLightWithHour:(long long)a0 clAIHar:(long long)a1 clIsWifi:(long long)a2 isCharge:(long long)a3 indoorMax:(float)a4 statType:(long long)a5;
- (id)determineAmbientLight;
- (void).cxx_destruct;
- (id)init;

@end
