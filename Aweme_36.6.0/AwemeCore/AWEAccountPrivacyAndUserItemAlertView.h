@class CAGradientLayer, NSString, AWEUIButton, UIView, UILabel, AWEPrivacyPaperworkView;

@interface AWEAccountPrivacyAndUserItemAlertView : UIView <TTTAttributedLabelDelegate>

@property (retain, nonatomic) UIView *alertMaskView;
@property (retain, nonatomic) UIView *firstStageWindow;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAGradientLayer *textUpperBlurLayer;
@property (retain, nonatomic) AWEUIButton *agreeButton;
@property (retain, nonatomic) AWEUIButton *disagreeButton;
@property (retain, nonatomic) UIView *bottomBlurView;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ agreeAction;
@property (retain, nonatomic) UIView *transparentView;
@property (retain, nonatomic) AWEPrivacyPaperworkView *textView;
@property (retain, nonatomic) UIView *secondStageWindow;
@property (retain, nonatomic) UIView *reConfirmdimmingView;
@property (retain, nonatomic) UIView *reConfirmcontentView;
@property (retain, nonatomic) AWEUIButton *reConfirmAgreeButton;
@property (retain, nonatomic) AWEUIButton *reConfirmDisagreeButton;
@property (retain, nonatomic) UILabel *reConfirmTitleLabel;
@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) AWEPrivacyPaperworkView *reConfirmTextView;
@property (nonatomic) BOOL shouldAdaptPad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINSSAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINLGAdapterClass;
+ (Class)aAWEMainModuleServiceDOUYINDSAdapterClass;
+ (Class)aAWEPrivacyAlertAdapterClass;
+ (Class)aAWEAccountPrivacyWindowFixCommonAdapterClass;
+ (Class)aAWEPrivacyExternServiceClass;

- (id)aAWEPadModuleAdapter;
- (unsigned long long)p_getEnablePrivacyDisagreeBasicMode;
- (id)aAWEMainModuleServiceDOUYINSSAdapter;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (id)aAWEMainModuleServiceDOUYINLGAdapter;
- (id)aAWEMainModuleServiceDOUYINDSAdapter;
- (void)agreeButtonDidTap;
- (void)showWithAgreeAction:(id /* block */)a0;
- (BOOL)iOS17WindowFixEnabled;
- (void)transferToReConfirmWindowView;
- (void)reConfirmagreeButtonDidTap;
- (void)disagreeButtonDidTap;
- (void)backToFirstStageWindow;
- (id)aAWEPrivacyExternService;
- (void)setUpReConfirmWindowView;
- (void)dismissSecondStageViewWithCompletion:(id /* block */)a0;
- (id)aAWEAccountPrivacyWindowFixCommonAdapter;
- (id)aAWEPrivacyAlertAdapter;
- (void)forceDismiss;
- (void).cxx_destruct;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)windowDidResignKey:(id)a0;
- (void)dismissViewWithCompletion:(id /* block */)a0;

@end
