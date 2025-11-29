@class IESLiveVSSendGiftCommandQueue, IESLiveVSGiftItem, UIImageView, CADisplayLink, UIView, NSString, UIButton;

@interface IESLiveVSBigGiftComboView : UIView <IESLiveVSSendGiftCommandQueueDelegate>

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) unsigned long long originCountdown;
@property (nonatomic) double currentCountdownRotate;
@property (retain, nonatomic) UIView *comboAnimationContentView;
@property (retain, nonatomic) UIImageView *comboBcakgroundImageView;
@property (retain, nonatomic) UIImageView *comboTextImageView;
@property (retain, nonatomic) UIButton *comboButton;
@property (nonatomic) BOOL isCountdowning;
@property (retain, nonatomic) IESLiveVSSendGiftCommandQueue *sendCommandQueue;
@property (retain, nonatomic) IESLiveVSGiftItem *giftItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)destroyTimer;
- (void)commandDidExecute:(id)a0 command:(id)a1 error:(id)a2;
- (id)p_createCommand;
- (void)loadComboSubviews;
- (void)tapEmpty;
- (void)p_dismissWithInterrupt:(BOOL)a0;
- (void)didComboButtonClicked:(id)a0;
- (id)initWithGiftItem:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)dealloc;

@end
