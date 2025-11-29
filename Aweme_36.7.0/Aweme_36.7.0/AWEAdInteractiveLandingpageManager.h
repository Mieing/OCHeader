@class UIViewController, NSString, AWEAwemeModel, AWEAdInteractiveLandingpageRifleView;

@interface AWEAdInteractiveLandingpageManager : NSObject <AWEAdInteractiveLandingpageManager, AWEBDARifleViewDelegate>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) AWEAdInteractiveLandingpageRifleView *interactiveCardView;
@property (nonatomic) BOOL isFromHomepage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowInteractiveLandingpageCardWithModel:(id)a0;
+ (id)adComponentWithAdModel:(id)a0;
+ (BOOL)hasInteractiveDataWithComponent:(id)a0;

- (void)setupContainerWithContainerVC:(id)a0 model:(id)a1 isFromHomepage:(BOOL)a2;
- (void)showInteractiveCard;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)loadCardView;
- (void)layoutCardViewWithContainerView:(id)a0;
- (void)hideInteractiveCard;
- (void).cxx_destruct;
- (void)reset;

@end
