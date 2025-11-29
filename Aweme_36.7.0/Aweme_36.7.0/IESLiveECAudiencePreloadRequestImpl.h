@class NSDictionary, NSString;

@interface IESLiveECAudiencePreloadRequestImpl : IESLivePreloadRequestBaseImpl <IESLiveECAudiencePreloadRequest>

@property (retain, nonatomic) NSDictionary *ecomLiveParams;
@property (retain, nonatomic) NSDictionary *contextParams;
@property (nonatomic) unsigned long long requestStage;
@property (nonatomic) double beginRequestTime;
@property (nonatomic) double endRequestTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_preloadrequstAction;
+ (unsigned long long)requestBusinessIdentifier;

- (id)trackParams;
- (BOOL)showCart;
- (void)preloadBindService;
- (BOOL)canRequestInStage:(unsigned long long)a0;
- (unsigned long long)preloadRequestMethod;
- (id)customRequest;
- (void)preloadRequestWillRequest;
- (void)preloadRequestDidCompleteWithRequest:(id)a0;
- (id)getRedirectPathWithPath:(id)a0;
- (id)getRedirectPathDict;
- (void)updateAddressInfo;
- (id)ecomSceneIDStr;
- (id)p_relatedInfoDicForCardRequest;
- (void).cxx_destruct;
- (id)actionType;
- (id)storageManager;
- (id)roomID;
- (id)authorID;

@end
