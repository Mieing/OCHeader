@class LynxUIScrollViewEventHelper, NSMutableArray;

@interface LynxUIScrollViewInternal : LynxUI

@property (retain, nonatomic) LynxUIScrollViewEventHelper *eventHelper;
@property (retain, nonatomic) NSMutableArray *firstRenderBlockArray;
@property (nonatomic) BOOL enableSticky;

+ (struct CGPoint { double x0; double x1; })getPositionOf:(id)a0 from:(id)a1 isRTL:(BOOL)a2;
+ (struct CGPoint { double x0; double x1; })formatOffset:(struct CGPoint { double x0; double x1; })a0 from:(id)a1 isRTL:(BOOL)a2;
+ (struct CGPoint { double x0; double x1; })addOffset:(struct CGPoint { double x0; double x1; })a0 by:(struct CGPoint { double x0; double x1; })a1 isRTL:(BOOL)a2;

- (void)layoutDidFinished;
- (BOOL)isScrollContainer;
- (void)onNodeReady;
- (BOOL)notifyParent;
- (void)setBounces:(BOOL)a0 requestReset:(BOOL)a1;
- (void)scrollBy:(id)a0 withResult:(id /* block */)a1;
- (void)scrollTo:(id)a0 withResult:(id /* block */)a1;
- (void)setScrollOrientation:(id)a0 requestReset:(BOOL)a1;
- (void)setUpperThreshold:(id)a0 requestReset:(BOOL)a1;
- (void)setLowerThreshold:(id)a0 requestReset:(BOOL)a1;
- (void)setInitialScrollOffset:(id)a0 requestReset:(BOOL)a1;
- (void)setEnableScroll:(BOOL)a0 requestReset:(BOOL)a1;
- (void)scrollInto:(id)a0 isSmooth:(BOOL)a1 type:(id)a2;
- (void)autoScroll:(id)a0 withResult:(id /* block */)a1;
- (void)setScrollEventThrottle:(id)a0 requestReset:(BOOL)a1;
- (void)setInitialScrollIndex:(long long)a0 requestReset:(BOOL)a1;
- (void)flushFirstRenderOperations;
- (void)setEnableScrollBar:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setForwardsNestedScroll:(long long)a0 requestReset:(BOOL)a1;
- (void)setBackwardsNestedScroll:(long long)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
