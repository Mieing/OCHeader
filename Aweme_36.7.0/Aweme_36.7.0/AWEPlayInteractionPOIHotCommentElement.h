@class NSString, AWEBaseElement, UIImageView, NSTimer, UILabel, UIView, YYLabel;

@interface AWEPlayInteractionPOIHotCommentElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UILabel *hotTagLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) YYLabel *hotCommentLabel;
@property (retain, nonatomic) UIView *likeContainerView;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (copy, nonatomic) id /* block */ videoHandler;
@property (copy, nonatomic) id /* block */ videoCancel;
@property (copy, nonatomic) id /* block */ videoSharedCancel;
@property (copy, nonatomic) id /* block */ videoSharedShow;
@property (copy, nonatomic) id /* block */ videoExpandCancel;
@property (weak, nonatomic) AWEBaseElement *contentElement;
@property (weak, nonatomic) AWEBaseElement *riskNoticeElement;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (retain, nonatomic) NSTimer *hideDelayTimer;
@property (nonatomic) long long status;
@property (nonatomic) double remainingTime;
@property (nonatomic) double timerStartTime;
@property (nonatomic) BOOL isHide;
@property (nonatomic) BOOL hasShow;
@property (nonatomic) long long stay;
@property (nonatomic) double viewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)setHide:(BOOL)a0;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)setIsInner:(id)a0;
- (void)onCommentLikeActionNotification:(id)a0;
- (void)appendCommentTrackParams;
- (void)contentViewTapped;
- (void)p_setObserver;
- (void)p_trackLifeOuterCommentShow:(BOOL)a0 andReason:(id)a1;
- (void)p_destroyDelayTimerShow:(BOOL)a0;
- (void)showElementsWithContent;
- (void)showElementsWithText;
- (void)p_pauseTimerShow:(BOOL)a0;
- (void)p_resumeTimerShow:(BOOL)a0;
- (void)clearTimerByEvent;
- (void)setCommentContent:(id)a0 likeCount:(long long)a1;
- (void)p_outerCommentOrClick:(BOOL)a0;
- (void)p_hideFire;
- (void)p_poiClick;
- (void)p_poiPanel;
- (void)setDiggCountDesc:(long long)a0;
- (id)getLikeDesc:(long long)a0;
- (void)setupLikeUI:(double)a0;
- (void)showElementWithAnimation:(BOOL)a0;
- (void)p_timerFire;
- (void)p_startDelayTimer;
- (id)commentLogExtra;
- (BOOL)hasIdentityInfoType:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
