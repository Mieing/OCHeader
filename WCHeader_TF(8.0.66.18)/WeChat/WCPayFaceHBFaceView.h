@class UIView, NSString, WCPayFaceRedEnvelopesReceiverInfo, MMHeadImageView, UIImageView, CAEmitterLayer, NSMutableArray, MMUILabel, AVAudioPlayer, MMTimer;
@protocol WCPayFaceHBFaceViewDelegate;

@interface WCPayFaceHBFaceView : UIView <IWCPayFaceHBMgrExt, CAAnimationDelegate> {
    MMHeadImageView *_headView;
    MMUILabel *_nameView;
    MMUILabel *_moneyView;
    UIView *_hbView;
    UIImageView *_hbBigView;
    UIImageView *_hbSmallView;
    UIView *_streamerView;
    CAEmitterLayer *_streamerLayer;
    UIView *_streamerBackView;
    CAEmitterLayer *_streamerBackLayer;
    UIView *_contentsView;
    UIView *_maskView;
    WCPayFaceRedEnvelopesReceiverInfo *m_info;
    BOOL m_bAnimating;
    unsigned long long m_t;
    NSMutableArray *m_blockArr;
    unsigned int lCount;
    unsigned int vCount;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_contentFrame;
    UIView *m_view;
    id<WCPayFaceHBFaceViewDelegate> m_delegate;
    AVAudioPlayer *m_sendOKPlayer;
    AVAudioPlayer *m_luckyPlayer;
    AVAudioPlayer *m_whistlePlayer;
    MMTimer *m_stimer;
    MMTimer *m_timer;
    struct CGSize { double width; double height; } m_bigSize;
    struct CGSize { double width; double height; } m_normalSize;
}

@property (nonatomic) BOOL bAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)getHeadView;
- (id)getSmallHBView;
- (id)getMoneyString;
- (void)updateUser:(id)a0;
- (id)getEmitterCell:(id)a0 image:(id)a1 isMore:(BOOL)a2 isBack:(BOOL)a3;
- (id)getStreamerLayer:(BOOL)a0;
- (void)playWhistle;
- (void)stopStreamersAnimation;
- (void)startStreamersAnimation;
- (void)startFlyAnimation;
- (void)startAnimate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startBandAnimate;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)updateFaceHB:(id)a0;
- (void).cxx_destruct;

@end
