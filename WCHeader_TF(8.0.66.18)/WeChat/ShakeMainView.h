@class MMUILabel, UIImageView, MMSayHelloButton, UIView, ShakeMsgUnreadButton, CirclesView;
@protocol ShakeMainFrameDelegate;

@interface ShakeMainView : MMUIScrollView <FriendAsistSessionExt, ShakeMgrExt> {
    UIView *m_hideView;
    BOOL m_bAnimating;
    MMSayHelloButton *m_btnSayHello;
    ShakeMsgUnreadButton *m_btnUnreadMsg;
    id<ShakeMainFrameDelegate> m_delegate;
    double m_middleY;
}

@property (retain, nonatomic) UIImageView *imageViewUp;
@property (retain, nonatomic) UIImageView *imageViewDown;
@property (retain, nonatomic) UIView *bkgViewUp;
@property (retain, nonatomic) UIView *bkgViewDown;
@property (retain, nonatomic) UIImageView *customImageView;
@property (retain, nonatomic) UIView *curMaskView;
@property (retain, nonatomic) UIImageView *defaultImageView;
@property (retain, nonatomic) CirclesView *circlesView;
@property (retain, nonatomic) MMUILabel *stateLabel;

- (void)setM_Delegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didChangeOrientation;
- (void)updateView;
- (void)updateViewForNormal;
- (void)updateViewForLoading;
- (void)setErrorMsg:(id)a0;
- (void)updateHideImage;
- (id)getHideImage;
- (id)tryGenHQImage:(id)a0;
- (id)getHideView;
- (id)getShakeSingleView;
- (void)stopAllAnimation;
- (void)startAnimationSplit;
- (void)onSplitAnimationEnd;
- (void)startAnimationMerge:(id /* block */)a0;
- (void)startBackgroundAnimate;
- (void)stopBackgroundAnimate;
- (BOOL)bIsAnimating;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)initSayHelloBtn;
- (void)initUnreadMsgBtn;
- (void)OnOpenSayHello;
- (void)OnOpenUnreadMsgList;
- (void)updateSayHelloBtnState;
- (void)updateUnreadMsgBtnState;
- (void)onFriendAssistUnreadCountChanged;
- (void)onShakeMsgUnreadCountChanged;
- (void).cxx_destruct;

@end
