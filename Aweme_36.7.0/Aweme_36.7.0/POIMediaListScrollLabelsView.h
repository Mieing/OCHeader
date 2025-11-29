@class UIColor, NSMutableArray, UIFont;

@interface POIMediaListScrollLabelsView : UIView

@property (retain, nonatomic) NSMutableArray *labels;
@property (nonatomic) double offset;
@property (nonatomic) double space;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) long long count;

- (id)createLabel;
- (void)updateWithOffset:(double)a0;
- (double)calcWidthWithIndex:(long long)a0;
- (id)getLabelWithIndex:(unsigned long long)a0;
- (id)getLabelContentWithVirtualPosition:(unsigned long long)a0;
- (double)calcLabelOffsetWithVirtualIndex:(unsigned long long)a0 offset:(double)a1;
- (double)calcAlphaWithVirtualIndex:(unsigned long long)a0 offset:(double)a1;
- (double)calcWidthWithOffset:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
