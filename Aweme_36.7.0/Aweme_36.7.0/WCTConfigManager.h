@class NSDictionary;

@interface WCTConfigManager : NSObject

@property (copy, nonatomic) NSDictionary *configDict;

+ (id)sharedInstance;

- (void)injectConfig:(id)a0;
- (void)removeConfig;
- (id)configWithKey:(id)a0;
- (int)intValueForKey:(id)a0;
- (BOOL)enableTrack;
- (double)crudTrackSampling;
- (double)defaultTrackSampling;
- (void).cxx_destruct;
- (id)init;
- (id)stringValueForKey:(id)a0;
- (BOOL)boolValueForKey:(id)a0;
- (void)setupConfig;
- (id)configFilePath;

@end
