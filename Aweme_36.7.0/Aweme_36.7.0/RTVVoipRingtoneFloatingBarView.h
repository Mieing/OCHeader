@class NSString, UIImageView, AWEScrollStringLabel, RTVVoipSession, UIButton;
@protocol RTVVoipRingtoneMusicModelProtocol, RTVVoipRingtoneDetailPanelProtocol;

@interface RTVVoipRingtoneFloatingBarView : UIView <UIGestureRecognizerDelegate, RTVVoipRingtoneFloatingBarProtocol>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEScrollStringLabel *label;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) id<RTVVoipRingtoneDetailPanelProtocol> detailPanel;
@property (retain, nonatomic) id<RTVVoipRingtoneMusicModelProtocol> musicModel;
@property (nonatomic) BOOL alreadyDigg;
@property (nonatomic) BOOL alreadyTraceMusicBarShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) RTVVoipSession *voipSession;

- (void)setScrollStringAnimationType:(unsigned long long)a0;
- (void)setEnableTitleAlignmentCenter:(BOOL)a0;
- (void)stopAnimationIfNeed;
- (void)startAnimationIfNeed;
- (BOOL)shouldScroll;
- (double)getTitleWidth;
- (void)traceFloatingBarShow;
- (void)setObserver;
- (void)onMusicLabelTapped;
- (void)traceFloatingBarClick:(id)a0;
- (void)onLikeButtonTapped;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityElements;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)setupUI;

@end
