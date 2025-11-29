@class NSTimer, AWEAwemeModel, AWEAdSummerCallingChargingCardModel, UIView, NSString, BDImageView, YYLabel, AWEPlayInteractionAdActivityElement;

@interface AWEAdActivitySummerCallingInsideComponent : NSObject <AWEAdActivityElementInsideComponentProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAdSummerCallingChargingCardModel *chargeCardModel;
@property (retain, nonatomic) UIView *avaterButton;
@property (retain, nonatomic) UIView *adContainerView;
@property (retain, nonatomic) BDImageView *chargeImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *descLabel;
@property (nonatomic) BOOL chargeImageViewFailed;
@property (retain, nonatomic) NSTimer *emitHeartsTimer;
@property (retain, nonatomic) NSTimer *stopEmitHeartsTimer;
@property (retain, nonatomic) NSTimer *failbackChargeIfNeededTimer;
@property (nonatomic) BOOL showing;
@property (nonatomic) BOOL emitFinished;
@property (nonatomic) BOOL chargeFinished;
@property (weak, nonatomic) AWEPlayInteractionAdActivityElement *containerElement;
@property (nonatomic) unsigned long long playerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)p_prepareForDisplay;
- (void)p_reset;
- (void)addAdContainerView;
- (void)emitHeartWithInterval;
- (void)emitHearts;
- (void)failbackChargeIfNeeded;
- (void)stopEmitHearts;
- (void)emitOneHeart;
- (void)chargeImageLoopCompleted;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)enterBackground;
- (void)addObserver;
- (void)reset;
- (void)enterForeground;
- (void)viewDidLoad;

@end
