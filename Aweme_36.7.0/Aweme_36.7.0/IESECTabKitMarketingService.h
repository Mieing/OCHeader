@class NSString;

@interface IESECTabKitMarketingService : IESECTabKitService <IESECTabKitMarketingService>

@property (copy, nonatomic) NSString *marketingPageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pageVisibilityChange:(BOOL)a0 tabId:(unsigned long long)a1;
- (void)registerMarketingPage:(id)a0 routerParams:(id)a1;
- (void)showMarketingPage:(id)a0 containerView:(id)a1 routerParams:(id)a2;
- (void)removeMarketingPage:(id)a0;
- (void).cxx_destruct;

@end
