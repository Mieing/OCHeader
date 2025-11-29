@class NSString, FlutterPlatformViewsController, UIViewController;
@protocol FlutterViewResponder;

@interface ForwardingGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    FlutterPlatformViewsController *_platformViewsController;
    long long _currentTouchPointersCount;
    UIViewController<FlutterViewResponder> *_flutterViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTarget:(id)a0 platformViewsController:(id)a1;
- (id)recreateRecognizerWithTarget:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)forceResetStateIfNeeded;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
