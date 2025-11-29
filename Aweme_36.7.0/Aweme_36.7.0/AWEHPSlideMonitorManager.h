@class NSString, NSMapTable, NSMutableDictionary;

@interface AWEHPSlideMonitorManager : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMapTable *monitorTouches;
@property (retain, nonatomic) NSMutableDictionary *monitorGestures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)currentAweme;
- (void)registerMonitorGestureWithModel:(id)a0;
- (void)updateGestureShouldBeginWithResult:(id)a0;
- (void)updateContextWithKey:(id)a0 value:(id)a1;
- (void)p_updateGestureShouldBeginWithModel:(id)a0 result:(id)a1;
- (void)p_receiveTouch:(id)a0;
- (void)p_handleTouch:(id)a0 changeToPhase:(long long)a1;
- (BOOL)currentMonitorEnable;
- (id)generateTouchMonitorModelWithTouch:(id)a0;
- (void)checkSlideResultWithModel:(id)a0;
- (id)generateGesturesPreNonRespondReason;
- (void)checkGestureNonRespondValidWithGestureModel:(id)a0 monitorModel:(id)a1;
- (void)checkGestureActionValidWithGestureModel:(id)a0 monitorModel:(id)a1;
- (id)getNonRespondReasonWithGestureModel:(id)a0 touchModel:(id)a1;
- (void)trackExceptionWithExceptionType:(id)a0 gestureModel:(id)a1 monitorModel:(id)a2;
- (id)descriptionOfGesture:(id)a0;
- (id)getTargetsAndActionsOfGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
