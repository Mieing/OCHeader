@class NSString;

@interface IESGCPCGDetectGesture : UIPanGestureRecognizer <UIGestureRecognizerDelegate, IESGCPDIContextSubscriber, IESGCPCGGestureRecognizeService>

@property (nonatomic) double lastDetectTimestamp;
@property (nonatomic) long long detectIntevalMillisecond;
@property (copy, nonatomic) id /* block */ touchesBegan;
@property (copy, nonatomic) id /* block */ touchesMoved;
@property (copy, nonatomic) id /* block */ touchesEnded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (double)lastGestureRecognizedTimestamp;
- (BOOL)lastTouchInMilliseconds:(long long)a0;
- (void)_gestureDetectedWithType:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)init;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
