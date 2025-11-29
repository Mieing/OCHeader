@class IESECBuyNowContext, NSDictionary, NSString, NSError;

@interface IESECBuyNowDataController : NSObject <YataNetConfigDelegate>

@property (weak, nonatomic) IESECBuyNowContext *context;
@property (nonatomic) BOOL isFirstRenderRequest;
@property (nonatomic) long long currentQueryVersion;
@property (copy, nonatomic) NSDictionary *response;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bizCommonQueryParamsFromRawParams:(id)a0 sessionID:(id)a1;
+ (id)megaObjectDictFromRawParams:(id)a0;
+ (id)fullBizCommonQueryParamsFromRawQueryParams:(id)a0 sessionID:(id)a1 sourceBTMToken:(id)a2;
+ (id)p_megaObjectFromRaw:(id)a0;
+ (id)basicExtraInfoDictWithSessionID:(id)a0;
+ (id)cjInfoDict;

- (id)bizUpdateApi;
- (id)yataUplinkExParams;
- (void)requestBuyNowQueryWithCommonQueryParams:(id)a0 completion:(id /* block */)a1;
- (id)bizQueryApi;
- (id)getAPIExtraParams;
- (void)requestBuyNowQueryWithCompletion:(id /* block */)a0;
- (void)requestBuyNowNoCacheQueryWithContext:(id)a0 completion:(id /* block */)a1;
- (id)bizCreateOrderApi;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
