@class ACCCameraSubscription, NSString, RACSubject, NSMutableSet, RACSignal, NSMutableArray, UIPanGestureRecognizer;
@protocol ACCRecordGestureServiceContextProvider;

@interface ACCRecordGestureServiceImpl : NSObject <UIGestureRecognizerDelegate, ACCRecordGestureService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NSMutableSet *gestureModelSet;
@property (retain, nonatomic) NSMutableArray *simultaneouslyRules;
@property (retain, nonatomic) NSMutableArray *requireFailureRules;
@property (retain, nonatomic) RACSubject *handleExternalPinchGestureSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableSet *gesturesSet;
@property (nonatomic) long long sdkGesturesAction;
@property (retain, nonatomic) UIPanGestureRecognizer *dropDownPanGestureRecognizer;
@property (readonly, nonatomic) RACSignal *handleExternalPinchGestureSignal;
@property (weak, nonatomic) id<ACCRecordGestureServiceContextProvider> contextProvider;

- (id)gesturesNeedAdded;
- (void)disableAllGestures;
- (void)enableAllGestures;
- (void)gesturesOnReceivedTouch:(id)a0;
- (void)gestureDidRecognized:(id)a0;
- (void)gestureSwipDirectionUpDidRecognized:(id)a0;
- (void)configAllGesturesEnabled:(BOOL)a0;
- (void)injectSimultaneouslyRule:(id /* block */)a0;
- (void)injectRequireFailureRule:(id /* block */)a0;
- (void)handleExternalPinchGesture:(id)a0;
- (BOOL)registerGesture:(id)a0;
- (BOOL)unregisterGesture:(id)a0;
- (id)gesturesWithFilter:(id /* block */)a0;
- (void)configGesturesEnabled:(BOOL)a0 force:(BOOL)a1 filter:(id /* block */)a2;
- (void)gestureActionWrapper:(id)a0;
- (id)fetchGestureContainerView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)addSubscriber:(id)a0;

@end
