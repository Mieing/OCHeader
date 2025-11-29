@class AWEAwemeModel;

@interface AWELiveLocalLifePreloadPackImpl : IESLiveBackendRequestBaseImpl

@property (retain, nonatomic) AWEAwemeModel *awemeModel;

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;
+ (id)availablePOILiveModuleService;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (id)availablePOILiveModuleService;
- (id)roomLevelParameters;
- (BOOL)enterFromFeedAd;
- (id)adRoomData;
- (BOOL)innerLiveAd;
- (void).cxx_destruct;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
