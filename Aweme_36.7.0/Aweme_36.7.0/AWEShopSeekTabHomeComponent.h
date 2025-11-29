@class NSString, UIViewController;
@protocol AWEShopSeekWorkViewControllerProtocol;

@interface AWEShopSeekTabHomeComponent : AWEUserHomeBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) UIViewController<AWEShopSeekWorkViewControllerProtocol> *shopSeekVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (void)onResetUI;
- (void)viewDidAppear;
- (void).cxx_destruct;

@end
