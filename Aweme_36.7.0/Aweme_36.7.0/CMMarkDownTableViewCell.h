@class YYLabel;

@interface CMMarkDownTableViewCell : UICollectionViewCell

@property (retain, nonatomic) YYLabel *contentLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelInsets;

- (void)updateLabelInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)config;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
