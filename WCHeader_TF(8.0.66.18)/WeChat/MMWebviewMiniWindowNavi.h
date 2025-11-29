@class MinimizeEdgeGestureHandler, UIScreenEdgePanGestureRecognizer, NSString;

@interface MMWebviewMiniWindowNavi : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, MinimizationNewTransitionDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) MinimizeEdgeGestureHandler *edgeGesHandler;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgeGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
