@class NSMutableArray;

@interface DitoFlowLayout : DitoContainerLayout

@property (nonatomic) double maxHeightLine;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSMutableArray *lastItemsInColumn;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;

- (void)appendItemWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (long long)numberOfComponentInContainer;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithContainer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemFrameAtIndex:(long long)a0;

@end
