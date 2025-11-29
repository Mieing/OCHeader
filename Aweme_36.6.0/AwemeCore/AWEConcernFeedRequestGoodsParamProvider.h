@class NSString;

@interface AWEConcernFeedRequestGoodsParamProvider : NSObject <AWEConcernFeedRequestParamProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraParamsWithPullType:(long long)a0 currentParams:(id)a1;
- (id)concernFeedGoodsCardAdditionParams;

@end
