@class NSString;

@interface AWEFeedPOIModuleService : HTSService <AWEFeedPOIModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadConcernPOIGoodsResourceWithChannel:(id)a0;
- (id)feedPOIDynamicCardManager;
- (Class)awemeDCardManagerClass;
- (Class)poiVideoViewControllerClass;
- (Class)poiEmphraseCollectViewBarContextClass;
- (id)poiEmphraseCollectViewBarContext;

@end
