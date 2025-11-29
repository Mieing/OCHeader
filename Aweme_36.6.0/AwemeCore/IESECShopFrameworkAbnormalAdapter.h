@class NSString;

@interface IESECShopFrameworkAbnormalAdapter : IESECShopFrameworkAdapter <IESECShopFrameworkAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowHeaderLive;
- (BOOL)shouldShowHeaderVideo;
- (id)profileViewWithContext:(id)a0 preferredWidth:(double)a1;
- (id)profileConciseViewWithContext:(id)a0 preferredWidth:(double)a1;
- (id)navbarViewWithContext:(id)a0;

@end
