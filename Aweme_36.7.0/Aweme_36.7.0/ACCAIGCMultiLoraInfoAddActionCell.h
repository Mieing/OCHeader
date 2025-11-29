@class UIImageView, UILabel;

@interface ACCAIGCMultiLoraInfoAddActionCell : ACCAIGCMultiLoraInfoCollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tipLabel;

- (void)configModel:(id)a0;
- (void)refreshCellStatus;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
