@class NSTimer;

@interface MATapPanToZoomGestureRecognizer : UIGestureRecognizer {
    double _tempOriginalScale;
    double _tempDeltaScale;
    struct CGPoint { double x; double y; } _pointFor3DTouchExclude;
    BOOL _isNeedCheckDoubleTap;
    unsigned long long _doubleTapCount;
}

@property (retain, nonatomic) NSTimer *internalTimer;
@property (nonatomic) long long singleTapCount;
@property (nonatomic) long long currentTouchCount;
@property (nonatomic) BOOL hasDoubleTapped;
@property (nonatomic) struct CGPoint { double x; double y; } originalPoint;
@property (nonatomic) double screenHeight;
@property (nonatomic) double scale;
@property (nonatomic) double originalScale;
@property (nonatomic) double deltaScale;

- (void)MATapPanToZoomGestureRecognizerDeallocOperation;
- (void)invalidateInternalTimer;
- (void)timeoutAction;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)resetProperties;

@end
