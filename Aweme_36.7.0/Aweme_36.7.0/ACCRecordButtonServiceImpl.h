@class ACCCameraSubscription, ACCLightningRecordButton, NSString, ACCGroupedPredicate;

@interface ACCRecordButtonServiceImpl : NSObject <ACCRecordButtonService>

@property (weak, nonatomic) ACCLightningRecordButton *recordButton;
@property (retain, nonatomic) ACCGroupedPredicate *callBeganImmediatelyPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *supportPictureModePredicate;
@property (nonatomic) unsigned long long mixSubtype;
@property (nonatomic) BOOL shouldBeganImmediately;
@property (nonatomic) BOOL supportPicture;
@property (nonatomic) BOOL fromHold;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)linkRecordAnimationView:(id)a0;
- (id)generateRecordButton;
- (id)currentRecordButton;
- (void)syncRecordButtonState:(id)a0;
- (void)triggerPropPanelRecordBeganTask;
- (void)triggerTouchBeganEventWithView:(id)a0 touches:(id)a1 event:(id)a2;
- (void)triggerTouchMovedEventWithView:(id)a0 touches:(id)a1 event:(id)a2;
- (void)triggerTouchEndedEventWithView:(id)a0 touches:(id)a1 event:(id)a2;
- (void)triggerTouchCancelledEventWithView:(id)a0 touches:(id)a1 event:(id)a2;
- (void)triggerStartRecordFromCountDown;
- (void)triggerStartPictureFromVolumnButton;
- (void)triggerStartRecordFromVolumnButton;
- (void)triggerStopRecordFromVolumnButton;
- (void)switchMixSubtypeToTap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recordButtonFrame:(id)a0;
- (void)touchBegan;
- (void)touchEnd;
- (void)triggerRecordStartEvent:(long long)a0;
- (void)switchMixTypeToHold;
- (void)triggerRecordStopEvent;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
