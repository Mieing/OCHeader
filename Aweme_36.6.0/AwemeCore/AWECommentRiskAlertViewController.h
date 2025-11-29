@class UIButton, AFDModalViewHelper, NSString, UILabel, UIView, NSAttributedString;

@interface AWECommentRiskAlertViewController : UIViewController <AWEPanelTransitionWithBackground, AWECommentRiskAlertViewControllerProtocol>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) NSAttributedString *descAttri;
@property (retain, nonatomic) UIButton *stillSendBtn;
@property (retain, nonatomic) UIButton *reeditBtn;
@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) id /* block */ reeditBlock;
@property (copy, nonatomic) id /* block */ stillSendBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (BOOL)disableInputSettings;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)presentedViewPanFinished;
- (id)aAWEPadModuleAdapter;
- (void)__setupUI;
- (id)__buildDescAttri:(id)a0;
- (void)__stillSendClick;
- (void)__reeditClick;
- (id)initWithDescription:(id)a0 isLandscape:(BOOL)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
