@class NSString;

@interface AWESearchGeneralSearchRepeatSearchPreRequestProvider : AWESearchPreRequestGeneralProvider <AWESearchPreRequestSceneProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestParamsContextWithObject:(id)a0;
+ (id)preNetworkRequestWithParamsContext:(id)a0 object:(id)a1;
+ (id)preInitRequestTagWithParamsContext:(id)a0;
+ (id)keywordWithParamsContext:(id)a0;
+ (id)searchSourceWithParamsContext:(id)a0;
+ (id)copyNetworkRequestWithContext:(id)a0 object:(id)a1 networkRequest:(id)a2;
+ (void)updatePreInitNetworkParamsWithContext:(id)a0 networkRequest:(id)a1;
+ (id)p_createRequestWithParams:(id)a0 object:(id)a1;
+ (id)needUpdatePreInitNetworkParamsConfig;
+ (id)predictIDFromParams:(id)a0;
+ (id)predictFetchParamsFromParams:(id)a0;
+ (BOOL)fixPredictFetchParamsEnable;


@end
