@class NSOrderedSet, NSMapTable;

@interface IESGCPTrackerViewDetector : NSObject

@property (retain, nonatomic) NSOrderedSet *lastExposeSet;
@property (retain, nonatomic) NSMapTable *traverseCache;
@property (copy, nonatomic) id /* block */ viewExposeBlock;
@property (copy, nonatomic) id /* block */ viewDismissBlock;
@property (copy, nonatomic) id /* block */ detectedBlock;
@property (nonatomic) double exposeAreaRatio;

- (BOOL)detectSingleWithView:(id)a0;
- (BOOL)isSatisfyDisplayBaseConditionForView:(id)a0;
- (void)traverseWithView:(id)a0 rootView:(id)a1 set:(id)a2 lastNode:(id)a3;
- (BOOL)detectSingleWithView:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isExpose:(id)a0 rootView:(id)a1 exposeRatio:(double)a2 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 useCache:(BOOL)a4;
- (BOOL)isSuperViewsHasScrollView:(id)a0 rootView:(id)a1;
- (BOOL)isExposeInScrollView:(id)a0 onTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scrollView:(id)a2 useCache:(BOOL)a3 exposeRatio:(double)a4;
- (void)iteraterAllSuperView:(id)a0 rootView:(id)a1 iterater:(id /* block */)a2;
- (BOOL)isExposeInScreenView:(id)a0 onTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 exposeRatio:(double)a2 useCache:(BOOL)a3;
- (BOOL)interactSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 AreaExposeWithRatio:(double)a2;
- (BOOL)checkRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 AreaExposeWithRatio:(double)a2;
- (void)detectWithRootView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
