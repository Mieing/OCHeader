@class NSNumber, NSMutableArray, NSString;
@protocol IESLiveWebViewService;

@interface IESLiveRoomAllGestureService : IESLiveGeneralBaseService <UIGestureRecognizerDelegate, IESLiveAllGesturesInterface>

@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) NSMutableArray *gestures;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL disableGestures;
@property (retain, nonatomic) NSNumber *customInnerFeedScrollAngle;
@property (retain, nonatomic) NSNumber *customInnerFeedScrollVelocity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)didForceUpdateToOrientation:(long long)a0;
- (id)addLiveGesture:(unsigned long long)a0 action:(id /* block */)a1;
- (id)addLiveGesture:(unsigned long long)a0 action:(id /* block */)a1 shouldBegin:(id /* block */)a2;
- (id)addLiveGesture:(unsigned long long)a0 allowLandscapeRespond:(BOOL)a1 action:(id /* block */)a2 shouldBegin:(id /* block */)a3;
- (void)disableAllGestures:(BOOL)a0;
- (void)removeLiveGesture:(id)a0;
- (id)adjustedHorizontalSwipeVelocityRatio;
- (id)adjustedInnerFeedScrollFastVelocity;
- (void)updateStrategyGestureInteractionParams;
- (void)clearStrategyGestureInteractionParams;
- (id)getGestureModelFrom:(id)a0;
- (void)respondAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)dealloc;

@end
