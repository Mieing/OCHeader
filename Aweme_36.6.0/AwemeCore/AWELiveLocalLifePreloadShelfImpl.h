@class NSDictionary, NSString;

@interface AWELiveLocalLifePreloadShelfImpl : IESLivePreloadRequestBaseImpl <AWELiveLocalLifePreloadShelfProtocol>

@property (retain, nonatomic) NSDictionary *contextParams;
@property (retain, nonatomic) NSDictionary *requestParameters;
@property (nonatomic) unsigned long long requestStage;
@property (nonatomic) double beginRequestTime;
@property (nonatomic) double endRequestTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)availablePOILiveModuleService;
+ (unsigned long long)requestBusinessIdentifier;

- (id)trackParams;
- (id)commonParam;
- (id)availablePOILiveModuleService;
- (id)preloadRequestParams;
- (BOOL)isAutoOpenLiveLifeShelf;
- (id)createRequestParams;
- (void)preloadBindService;
- (BOOL)canRequestInStage:(unsigned long long)a0;
- (unsigned long long)preloadRequestMethod;
- (id)customRequest;
- (void)preloadRequestWillRequest;
- (void)preloadRequestDidCompleteWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)actionType;
- (id)roomID;
- (id)authorID;

@end
