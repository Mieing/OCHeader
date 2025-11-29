@class BDXLynxOverlayLightSimultaneouslyGestureRecognizer, LynxEventHandler, NSString;
@protocol BDXLynxOverlayLightViewDelegate;

@interface BDXLynxOverlayLightContainer : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) BDXLynxOverlayLightSimultaneouslyGestureRecognizer *simulGesture;
@property (nonatomic) long long eventHandlerIndex;
@property (retain, nonatomic) LynxEventHandler *eventHandler;
@property (weak, nonatomic) id<BDXLynxOverlayLightViewDelegate> uiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEdgePanGesture:(id)a0;
- (void)ensureEventHandler;
- (void)enableTouchOverlayEvent:(BOOL)a0;
- (void)handleSimulGesture:(id)a0;
- (BOOL)checkScrollViewCanBeScrolled:(id)a0 withPanGesture:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (void)setHidden:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handlePanGesture:(id)a0;

@end
