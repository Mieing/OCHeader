@class NSString, NSTimer, AWEAwemeModel, UIView, NSNumber, UIViewController;
@protocol AWEAdRichAwemeStatusProtocol, AWEAdRichAwemeInteractionCard, AWEPlayInteractionViewControllerProtocol;

@interface AWECommerceAdRichAwemeManagerCommonAdapter : NSObject <AWECommerceAdRichAwemeManagerCommonAdapter, AWEAdRichAwemeFeedContextProvider>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) id /* block */ loopHandler;
@property (copy, nonatomic) id /* block */ pinchHandler;
@property (copy, nonatomic) id /* block */ learnMoreClickHandler;
@property (copy, nonatomic) id /* block */ noAccountAvatarClickHandler;
@property (retain, nonatomic) NSTimer *showInteractionCardTimer;
@property (nonatomic) BOOL waitingForInteractionCard;
@property (nonatomic) BOOL isInteractionCardAnimating;
@property (nonatomic) unsigned long long feedImageSliderViewPlayMode;
@property (nonatomic) BOOL userScrolledBefore;
@property (weak, nonatomic) id<AWEAdRichAwemeStatusProtocol> statusManager;
@property (nonatomic) unsigned long long feedPhase;
@property (retain, nonatomic) NSNumber *showIndex;
@property (retain, nonatomic) NSNumber *changeIndex;
@property (nonatomic) BOOL isLeave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<AWEAdRichAwemeInteractionCard> *interactionCard;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionController;

+ (BOOL)feedCanAutoPlayWithPresentedViewController:(id)a0;
+ (Class)weakTargetClass;
+ (BOOL)shouldDisableFullScreenAndInteractionCard:(id)a0;

- (void)configSelf;
- (void)enterWithInteractionViewController:(id)a0 model:(id)a1;
- (void)showAdComponentFromIndex:(long long)a0 toIndex:(long long)a1 method:(unsigned long long)a2;
- (void)trackFromIndex:(long long)a0 toIndex:(long long)a1 method:(unsigned long long)a2;
- (void)lynxLearnMoreViewHandle:(unsigned long long)a0;
- (void)nativeLearnMoreViewHandle:(BOOL)a0 method:(unsigned long long)a1;
- (void)showFlashedLearnMoreView;
- (void)showNormalLearnMoreView;
- (void)showBrandAdComponentFromIndex:(long long)a0 toIndex:(long long)a1 method:(unsigned long long)a2;
- (void)showAuctionAdComponentFromIndex:(long long)a0 toIndex:(long long)a1 method:(unsigned long long)a2;
- (void)showMultiLynxCardAdComponentFromIndex:(long long)a0 toIndex:(long long)a1 method:(unsigned long long)a2;
- (void)showAdRichAwemeInteractionCard;
- (void)showFlashedLearnMoreViewWhenBrandAd;
- (void)lynxShowFailTrack;
- (id)lynxButton;
- (void)showLearnMoreLynxView;
- (void)showButtonIfNeeded;
- (void)changeButtonIfNeeded;
- (BOOL)hasPromptCard;
- (void).cxx_destruct;
- (void)leave;
- (id)weakTarget;
- (void)setupInitialLayout;

@end
