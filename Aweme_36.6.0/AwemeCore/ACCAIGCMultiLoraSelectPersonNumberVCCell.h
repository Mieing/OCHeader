@class UILabel, UIView;

@interface ACCAIGCMultiLoraSelectPersonNumberVCCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *selectBorderView;
@property (retain, nonatomic) UILabel *label;

- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateContent:(id)a0;

@end
