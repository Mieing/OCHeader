@class NSString, UIViewController;
@protocol AFDFamiliarRecommendWorkViewControllerProtocol;

@interface AWEFamiliarRecommendDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) UIViewController<AFDFamiliarRecommendWorkViewControllerProtocol> *recommendVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (id)padService;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (id)familiarRecommendTabModel;
- (void).cxx_destruct;
- (id)user;
- (id)title;

@end
