@class NSString, AFDModalViewHelper, UIView;

@interface AWEU14VerificationGuideViewController : UIViewController <AWEPanelTransitionWithBackground, AWEU14VerificationGuideViewControllerProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ closeAction;

+ (struct CGSize { double x0; double x1; })p_contentViewSize;
+ (struct CGSize { double x0; double x1; })p_headerImageViewSize;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)presentedViewPanFinished;
- (void)p_closeAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_clickCancelButton:(id)a0;
- (void)p_clickVerificationButton:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
