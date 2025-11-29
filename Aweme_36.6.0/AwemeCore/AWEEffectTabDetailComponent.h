@class NSString, AWEEffectArtistViewController;

@interface AWEEffectTabDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) AWEEffectArtistViewController *effectVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onRefreshHeaderView:(id)a0 shouldRefreshTabView:(BOOL)a1;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (void)onResetUI;
- (void).cxx_destruct;

@end
