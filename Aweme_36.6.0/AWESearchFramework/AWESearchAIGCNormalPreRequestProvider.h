@class NSString;

@interface AWESearchAIGCNormalPreRequestProvider : AWESearchPreRequestAIGCProvider <AWESearchPreRequestSceneProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestParamsContextWithObject:(id)a0;
+ (id)preNetworkRequestWithParamsContext:(id)a0 object:(id)a1;


@end
