@protocol IESLiveLocalLifeAwemeModelService;

@interface IESLiveLocalLifePreloadPackImpl : IESLiveBackendRequestBaseImpl

@property (retain, nonatomic) id<IESLiveLocalLifeAwemeModelService> awemeModel;

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (id)roomLevelParameters;
- (BOOL)enterFromFeedAd;
- (id)adRoomData;
- (BOOL)innerLiveAd;
- (void).cxx_destruct;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
