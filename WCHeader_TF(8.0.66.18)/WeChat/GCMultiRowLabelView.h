@class NSMutableArray;

@interface GCMultiRowLabelView : UIView

@property (retain, nonatomic) NSMutableArray *labelArray;
@property (nonatomic) int rowCnt;

- (void)configureRowCnt:(int)a0 labelConfig:(id)a1;
- (void)configureWithLabelArray:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
