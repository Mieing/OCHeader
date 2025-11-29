@class LLDitoNodeLayout;

@interface LLDitoNodeFlowLayoutItem : NSObject

@property (nonatomic) long long indexOfColumn;
@property (nonatomic) long long indexOfRow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemFrame;
@property (weak, nonatomic) LLDitoNodeLayout *layout;
@property (nonatomic) BOOL isBottom;
@property (nonatomic) BOOL didAppendBottomMarign;

- (void).cxx_destruct;
- (id)init;

@end
