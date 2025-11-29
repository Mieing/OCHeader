@class NSString, AWEMysteryBoxRifleView, AWEAwemeModel, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol, AWECommerceComponentContext;

@interface AWEAdMysteryBoxManager : NSObject <AWECommerceComponentProtocol, AWEAdMysteryBoxManager, AWEBDARifleViewDelegate>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionVC;
@property (retain, nonatomic) AWEMysteryBoxRifleView *animationView;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (id)adComponentWithAdModel:(id)a0;
+ (BOOL)shouldShowMysteryBoxAnimationViewWithModel:(id)a0;
+ (BOOL)isMysteryBoxAdWithComponent:(id)a0;

- (void)loadAnimationView;
- (void)setupContainerWithInteractionViewController:(id)a0 model:(id)a1;
- (void)hideAnimationView;
- (void)showAnimationView;
- (void)handleShowAnimationContainerWithIndex:(long long)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)reset;

@end
