@class NSDictionary, NSString, WAPublicResModel;

@interface WAApptaskPublicResLogic : NSObject

@property (retain, nonatomic) NSDictionary *pubLibVersion;
@property (copy, nonatomic) NSString *appid;
@property (retain, nonatomic) WAPublicResModel *model;

- (id)init;
- (id)description;
- (id)getLibStringVersion;
- (BOOL)getLibFeatureSupported:(id)a0;
- (id)getLibExptString;
- (id)getLibExptDict;
- (BOOL)getLibPruneWxConfigByPage;
- (BOOL)getLibSupportLazyCodeLoading;
- (BOOL)getLibSupportSkyline;
- (BOOL)getLibSupportGameLive;
- (BOOL)getLibSupportGameLiveInvite;
- (BOOL)getLibSupportMenuGameComponent;
- (id)getLibStringVersionUpdateTime;
- (id)getLibStringUpdateTime;
- (BOOL)getInjectGameContextPlugin;
- (BOOL)getLibSupportInjectAppSeparatedPlugin;
- (BOOL)getLibSupportInvokeWithAppId;
- (BOOL)getLibSupportAudits;
- (BOOL)getLibSupportListenTaskStateChange;
- (BOOL)getLibSupportListenNewPerformanceMetric;
- (unsigned int)getLibPrivacyApiVersion;
- (long long)getWkFeatureVersion;
- (id)getPublicLocalCacheData:(unsigned long long)a0;
- (id)getPublicLocalCacheDataWithRelativePath:(id)a0;
- (id)getWAMagicBrushMainContextJS;
- (id)getWAMagicBrushSubContextJS;
- (void).cxx_destruct;

@end
