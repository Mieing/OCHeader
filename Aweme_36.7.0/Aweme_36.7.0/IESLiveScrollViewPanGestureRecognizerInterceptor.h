@class NSMapTable, NSString, UIScrollView, UIPanGestureRecognizer;

@interface IESLiveScrollViewPanGestureRecognizerInterceptor : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (readonly, nonatomic) double minTranslate;
@property (readonly, nonatomic) double minVelocity;
@property (readonly, nonatomic) NSMapTable *contentOffsetMap;
@property (weak, nonatomic) UIScrollView *currentScrollView;
@property (nonatomic) BOOL interceptEnable;
@property (copy, nonatomic) id /* block */ interceptAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)suggestionDirectionForScrollView:(id)a0;
- (id)initWithMinTranslate:(double)a0 minVelocity:(double)a1;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)reset;

@end
