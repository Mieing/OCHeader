@class UINavigationController, AFDModalViewHelper, NSString, AWEPublishHalfScreenContentViewController;

@interface AWEPublishHalfScreenPopupViewController : UIViewController <AWEPanelTransitionWithBackground>

@property (retain, nonatomic) AWEPublishHalfScreenContentViewController *contentVC;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UINavigationController *innerNavigation;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)presentedViewPanFinished;
- (id)initWithContentVC:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
