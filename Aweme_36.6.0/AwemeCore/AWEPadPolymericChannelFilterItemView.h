@class UILabel;

@interface AWEPadPolymericChannelFilterItemView : UICollectionViewCell

@property (retain, nonatomic) UILabel *itemLabel;

+ (id)itemViewWithTitle:(id)a0 selected:(BOOL)a1;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
