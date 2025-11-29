@class GCLabelDynamicLayout;

@interface GCAtCellModelLayout : GCDynamicLayoutProvider

@property (nonatomic) double headWidth;
@property (nonatomic) double avatarToTitleSpace;
@property (retain, nonatomic) GCLabelDynamicLayout *titleLabelLayout;
@property (nonatomic) double titleToSubTitleSpace;
@property (retain, nonatomic) GCLabelDynamicLayout *subTitleLayout;
@property (nonatomic) double selectedImgWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } collectionViewInset;
@property (nonatomic) double cellHeight;
@property (nonatomic) double totalHeight;

- (id)init;
- (void).cxx_destruct;

@end
