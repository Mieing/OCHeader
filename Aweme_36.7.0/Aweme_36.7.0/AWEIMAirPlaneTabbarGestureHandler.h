@class NSString;

@interface AWEIMAirPlaneTabbarGestureHandler : NSObject <AWEBizTabBarGlobalPluginProtocol>

@property (nonatomic) BOOL isIMReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPluginEffect;
- (BOOL)shouldInterceptSingleClickWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (BOOL)shouldInterceptLongPressWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (BOOL)shouldInterceptDoubleClickWithCurrentTabID:(id)a0 targetTabID:(id)a1;
- (void)tabBarDidChangeSelectedTabWithCurrentSelectedTabID:(id)a0 previousSelectedTabID:(id)a1;
- (id)shouldInterceptTabCurrentReferStringWithTabID:(id)a0;
- (void)__recordIMReady;
- (BOOL)__enableResponse;
- (id)init;

@end
