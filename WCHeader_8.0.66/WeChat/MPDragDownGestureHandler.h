@class NSString, MPCustomInteractiveHandler, MPDragDownGestureRecognizer, UIGestureRecognizer;
@protocol MPDragDownGestureHandlerDelegate;

@interface MPDragDownGestureHandler : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) MPCustomInteractiveHandler *interactiveHandler;
@property (weak, nonatomic) id<MPDragDownGestureHandlerDelegate> delegate;
@property (retain, nonatomic) MPDragDownGestureRecognizer *recognizer;
@property (nonatomic) BOOL isShouldBegin;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) double distance;
@property (weak, nonatomic) UIGestureRecognizer *recognizeSimultaneouslyGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0 interactiveHandler:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)setupGestureWithView:(id)a0;
- (void)clearGesture;
- (id)gestureRecognizer;
- (void)handleGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;

@end
