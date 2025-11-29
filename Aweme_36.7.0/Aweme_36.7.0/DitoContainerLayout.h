@class NSMutableArray, UIView;

@interface DitoContainerLayout : NSObject

@property (weak, nonatomic) UIView *container;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;

- (void)appendItemWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithContainer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })itemFrameAtIndex:(long long)a0;

@end
