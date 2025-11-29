@class DolphinPollenSettingsResolver, DolphinPollenFantaFeatureProvider, DolphinPollenRequestManager, NSDictionary;

@interface DolphinPollenService : NSObject

@property (retain, nonatomic) DolphinPollenFantaFeatureProvider *featureProvider;
@property (retain, nonatomic) DolphinPollenRequestManager *requestManager;
@property (retain, nonatomic) DolphinPollenSettingsResolver *settingsResolver;
@property (retain, nonatomic) NSDictionary *rawDict;
@property (retain, nonatomic) NSDictionary *pathConfig;

+ (id)sharedInstance;

- (id)fetchFeatureWithPath:(id)a0;
- (id)processPathStr:(id)a0;
- (id)getSceneConfig;
- (id)getMergedFeatureStringWithSceneConfig:(id)a0 pathConfig:(id)a1 path:(id)a2;
- (id)encryptFeatureString:(id)a0;
- (void)handleRequest;
- (void).cxx_destruct;
- (id)init;

@end
