@class NSString, NSMutableDictionary;

@interface IESECTabKitTabSetting : NSObject

@property (copy, nonatomic) NSString *bundleUrl;
@property (retain, nonatomic) NSMutableDictionary *abilityConfigs;

+ (long long)naPrefetchStrategyForUrl:(id)a0;
+ (BOOL)disablePageViewEventForUrl:(id)a0;
+ (BOOL)enableAnnieXForceForUrl:(id)a0;

- (long long)abilityConfigForKey:(id)a0;
- (id)initWithBundleUrl:(id)a0;
- (BOOL)enableAnnieXForce;
- (double)perfSamplingRate;
- (BOOL)enableSyncUpdateDataOpt;
- (BOOL)enableNaPrefetchSyncUpdateV2;
- (void).cxx_destruct;

@end
