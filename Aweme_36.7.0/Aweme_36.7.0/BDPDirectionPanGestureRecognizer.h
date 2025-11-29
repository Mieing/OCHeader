@class NSPointerArray, NSString;

@interface BDPDirectionPanGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSPointerArray *delegates;
@property (nonatomic) BOOL isStartFromEdge;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long allowDirection;
@property (nonatomic) BOOL isEnableEdgeBackConflit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldCancelTouches:(id)a0;

- (BOOL)currentRecognizerDirectionAllowed;
- (BOOL)isEdgeGestureRecognizer;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceivePress:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)commonInit;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)reset;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)setDelegate:(id)a0;

@end
