@class NSMutableArray;

@interface WCEditImagePenTraceMgr : NSObject

@property (retain, nonatomic) NSMutableArray *penTraceViews;

- (id)genAndAddAPenDrawViewWithLayer:(id)a0;
- (void)addTraceView:(id)a0;
- (void)removeATraceView:(id)a0;
- (void)reAddATraceView:(id)a0;
- (BOOL)isTracesContainAPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasPenTrace;
- (BOOL)highLightPenTraceAtPointIfNeeded:(struct CGPoint { double x0; double x1; })a0;
- (id)getHighLightPenTraceIndex;
- (void)setPenTraceHidden:(BOOL)a0 withIndex:(id)a1;
- (void)setPenTraceHighLight:(BOOL)a0 withIndex:(id)a1;
- (void)_playShockIfNeeded;
- (void).cxx_destruct;

@end
