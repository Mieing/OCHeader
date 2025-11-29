@class AFDModalViewHelper, UIImageView, NSString, UIView, UILabel, UIButton;
@protocol AWEPublishVideoReplyPopupViewControllerDelegation, AWESettingSwitchProtocol;

@interface AWEPublishVideoReplyPopupViewController : UIViewController <AWEPanelTransitionWithBackground>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (weak, nonatomic) id<AWEPublishVideoReplyPopupViewControllerDelegation> delegation;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UIView *transparentVoiceOverView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLbl;
@property (retain, nonatomic) UILabel *descLbl;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *switchLbl;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *panelSwitch;
@property (retain, nonatomic) UIButton *switchTransparentButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelHeight;
- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)p_updateUI;
- (id)initWithDelegation:(id)a0;
- (void)updateSwitchState:(BOOL)a0;
- (void)p_updateContentAndUI;
- (void)p_didChangeSwitchValue:(id)a0;
- (void)p_didTapSwitchTransparentButton;
- (void)p_updateIconImage:(id)a0;
- (void)p_setTopRoundCorners:(id)a0;
- (void)p_closeView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;

@end
