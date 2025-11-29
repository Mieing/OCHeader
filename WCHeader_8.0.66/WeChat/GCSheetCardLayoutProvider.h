@class GCLabelDynamicLayout;

@interface GCSheetCardLayoutProvider : GCDynamicLayoutProvider

@property (retain, nonatomic) GCLabelDynamicLayout *headLabelLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *multiLabelRowLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *multiLabelRowBoldLayout;
@property (nonatomic) double headLineLabelBtmSpace;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelGroupEdgeInsets;
@property (nonatomic) int rowCnt;
@property (nonatomic) int cowCnt;
@property (nonatomic) double contentHeight;

- (id)init;
- (void).cxx_destruct;

@end
