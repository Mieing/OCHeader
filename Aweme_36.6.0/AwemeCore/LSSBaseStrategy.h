@class NSDictionary, NSString, NSMutableArray;

@interface LSSBaseStrategy : NSObject

@property (copy, nonatomic) NSDictionary *strategyInfo;
@property (copy, nonatomic) NSString *strategyName;
@property (retain, nonatomic) NSMutableArray *RTPlayFeaturesBundle;
@property (retain, nonatomic) NSMutableArray *PlayFeaturesBundle;
@property (retain, nonatomic) NSMutableArray *DeviceFeaturesBundle;
@property (retain, nonatomic) NSMutableArray *NetworkFeaturesBundle;
@property (retain, nonatomic) NSMutableArray *UserFeaturesBundle;
@property (retain, nonatomic) NSMutableArray *PushFeaturesBundle;

+ (id)defaultStrategyInstance;

- (id)runLocalStrategy:(id)a0;
- (unsigned long long)checkStrategyConfig;
- (id)filleFeature:(id)a0 sdkInfo:(id)a1;
- (id)runSmartStrategy:(id)a0;
- (void)updateStrategyConfig:(id)a0;
- (id)runStrategy:(id)a0 sdkInfo:(id)a1;
- (id)resolutionResult:(BOOL)a0 bitrate:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
