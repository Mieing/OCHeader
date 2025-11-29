@class NSArray, ACCEffectTouchDeliveryGestureRecognizer, ACCEffectGestureActionHandler, NSDictionary, NSString;
@protocol ACCRecorderViewContainer, ACCCameraService, ACCRecordGestureService, ACCRecordPropService;

@interface ACCEffectGestureComponent : ACCFeatureComponent <UIGestureRecognizerDelegate, ACCRecordGestureServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (retain, nonatomic) ACCEffectGestureActionHandler *actionHandler;
@property (retain, nonatomic) ACCEffectTouchDeliveryGestureRecognizer *touchDeliveryGestureRecognizer;
@property (retain, nonatomic) NSArray *highPriorityEffectIDList;
@property (retain, nonatomic) NSDictionary *effectGestureDict;
@property (nonatomic) BOOL isManuallyDisableEffectGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)gestureService:(id)a0 didRegisterGesture:(id)a1;
- (void)configGestureService;
- (void)readExistData;
- (void)updateGestureStateForEffect:(id)a0;
- (void)manuallyDisableEffectGestureIfNeeded;
- (void)manuallyRecoverSDKGestureIfNeeded;
- (void)handleEffectGesture:(id)a0 type:(unsigned long long)a1;
- (void)setupGestureModel:(id)a0;
- (id)filterDeliveryGestureTouches:(id)a0;
- (void)configBizGestureEnabled:(BOOL)a0;
- (void)handleTransferTouchTag:(BOOL)a0;
- (void)enableAllEffectGesture;
- (void)updateGestureWithEffectGestureInfo:(id)a0 reletedBaseTypeSet:(id)a1;
- (void)openTouchDeliveryWithNeedDelay:(BOOL)a0;
- (void)configEffectGestureEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setupGestures;

@end
