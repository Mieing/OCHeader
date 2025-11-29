@class LynxUIContext, NSDictionary;

@interface LynxScrollEventManager : NSObject

@property (weak, nonatomic) LynxUIContext *context;
@property (nonatomic) long long sign;
@property (retain, nonatomic) NSDictionary *eventSet;

- (BOOL)eventBound:(id)a0;
- (void)sendScrollEvent:(id)a0 scrollView:(id)a1 deltaX:(double)a2 deltaY:(double)a3;
- (void)sendScrollEvent:(id)a0 scrollTop:(double)a1 scrollLeft:(double)a2 scrollHeight:(double)a3 scrollWidth:(double)a4 deltaX:(double)a5 deltaY:(double)a6 isDragging:(BOOL)a7 detail:(id)a8;
- (id)initWithContext:(id)a0 sign:(long long)a1 eventSet:(id)a2;
- (void)sendScrollEvent:(id)a0 scrollView:(id)a1;
- (void)sendScrollEvent:(id)a0 scrollView:(id)a1 detail:(id)a2;
- (void)sendScrollEvent:(id)a0 scrollView:(id)a1 targetContentOffset:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;

@end
