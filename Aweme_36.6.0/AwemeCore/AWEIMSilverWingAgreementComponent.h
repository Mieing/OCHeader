@class UIButton, NSString, UIVisualEffectView, UIView, YYLabel;

@interface AWEIMSilverWingAgreementComponent : AWEIMComponentBase <AWEIMMessageListBackgroundAction, AWEIMSilverWingAgreementInterface>

@property (retain, nonatomic) UIView *acceptView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *acceptBtn;
@property (retain, nonatomic) UIVisualEffectView *acceptBtnBlurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setIconImageWithURL:(id)a0 forButton:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)themeDidReload;
- (void)p_viewDidAppear;
- (id)getAttrStrWithChatBackground:(BOOL)a0;
- (void)acceptSilverWingAgreement:(id /* block */)a0;
- (id)getBaseVC;
- (void)tapAcceptView:(id)a0;
- (void)didTapAccept:(id)a0;
- (void).cxx_destruct;
- (void)setupView;

@end
