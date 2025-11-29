@class NSMutableArray;

@interface RelaxFramework.ListEventScrollDetail : NSObject

@property (nonatomic) double deltaX;
@property (nonatomic) double deltaY;
@property (nonatomic) double scrollLeft;
@property (nonatomic) double scrollTop;
@property (nonatomic) double scrollWidth;
@property (nonatomic) double scrollHeight;
@property (nonatomic) double listWidth;
@property (nonatomic) double listHeight;
@property (nonatomic) int eventSource;
@property (nonatomic, retain) NSMutableArray *attachedCells;

- (id)initWithDeltaX:(double)a0 deltaY:(double)a1 scrollLeft:(double)a2 scrollTop:(double)a3 scrollWidth:(double)a4 scrollHeight:(double)a5 listWidth:(double)a6 listHeight:(double)a7 eventSource:(int)a8 attachedCells:(id)a9;
- (void).cxx_destruct;
- (id)init;

@end
