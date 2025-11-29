@class NSString, UIViewController;
@protocol AWEEmptyRecommendViewControllerProtocol;

@interface AWEEmptyRecommendTabDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol, AWEEmptyRecommendTabComponentProtocol>

@property (retain, nonatomic) UIViewController<AWEEmptyRecommendViewControllerProtocol> *emptyRecommendVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (void)onResetUI;
- (void).cxx_destruct;
- (void)update;
- (void)onInit;
- (void)viewWillDisappear;

@end
