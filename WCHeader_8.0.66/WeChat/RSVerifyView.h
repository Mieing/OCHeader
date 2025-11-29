@class NSString, MMHeadImageView, UIImageView, WCUIAlertView, UIButton, RSHeadImageView, RSVerifyAnimationView, UILabel, CContactVerifyPreCheckBusinessLogic;
@protocol RSVerifyViewDelegate;

@interface RSVerifyView : MMUIImageView <ContactVerifyPreCheckBusinessLogicDelegate, RSVerifyAnimationViewDelegate> {
    MMHeadImageView *_imageView;
    UIImageView *_headBGView;
    UILabel *_displayName;
    RSVerifyAnimationView *_animationView;
    UIButton *_statusFrame;
    UILabel *_helloLabel;
    UIButton *_remarkBtn;
    UIButton *_addFriendBtn;
    UIButton *_exposeBtn;
    RSHeadImageView *_headImage;
    CContactVerifyPreCheckBusinessLogic *m_verifyPreCheckBusinessLogic;
}

@property (retain, nonatomic) WCUIAlertView *alertView;
@property (weak, nonatomic) id<RSVerifyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initHeadView;
- (void)initDisplayNameLabel;
- (void)initStatusFrame;
- (void)initHelloLabel;
- (void)initRemarkBtn;
- (void)initAddFriendButton;
- (void)initExposeButton;
- (void)initBackgroundView;
- (void)initAnimationView;
- (void)initView;
- (void)doShowStatusFrameAnimation;
- (void)doShowAddFriendButtonAnimation;
- (void)layoutSubviews;
- (void)startAnimationWithUsername:(id)a0 OriginPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)hideSelf;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)doSetRemark;
- (void)onSetRemark;
- (void)onAddFriend;
- (void)onDoAddFriend;
- (void)onExpose;
- (void)onAnimationFinish:(BOOL)a0;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)a0 opcode:(unsigned int)a1;
- (id)getVerifyPreCheckBusinessLogic;
- (id)getViewController;
- (void).cxx_destruct;

@end
