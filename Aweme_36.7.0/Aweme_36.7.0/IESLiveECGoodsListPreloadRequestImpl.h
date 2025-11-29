@class NSDictionary, NSString;

@interface IESLiveECGoodsListPreloadRequestImpl : IESLivePreloadRequestBaseImpl <IESLiveECGoodsListPreloadRequest>

@property (retain, nonatomic) NSDictionary *ecomLiveParams;
@property (retain, nonatomic) NSDictionary *contextParams;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *isOtherChannel;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) unsigned long long requestStage;
@property (nonatomic) double beginRequestTime;
@property (nonatomic) double endRequestTime;
@property (retain, nonatomic) NSDictionary *preloadRequestParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_preloadrequstAction;
+ (unsigned long long)requestBusinessIdentifier;

- (id)trackParams;
- (id)enterFromMerge;
- (BOOL)showCart;
- (BOOL)isMultiLinker;
- (void)preloadBindService;
- (BOOL)canRequestInStage:(unsigned long long)a0;
- (unsigned long long)preloadRequestMethod;
- (id)customRequest;
- (void)preloadRequestWillRequest;
- (void)preloadRequestDidCompleteWithRequest:(id)a0;
- (id)getRedirectPathWithPath:(id)a0;
- (id)getRedirectPathDict;
- (id)panelSizeHeightPercent;
- (void)p_handleADParamsWithParams:(id)a0;
- (void)updateAddressInfo;
- (id)ecomSceneIDStr;
- (BOOL)shouldAutoOpenList;
- (id)totalParamsFromJumpSchema;
- (id)finalRelatedInfoForListRequest;
- (id)relatedInfoDicForListRequestFromEcomLiveParams;
- (void).cxx_destruct;
- (id)actionType;
- (id)storageManager;
- (id)roomID;
- (id)authorID;

@end
