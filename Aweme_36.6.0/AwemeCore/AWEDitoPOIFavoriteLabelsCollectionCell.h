@class UILabel, UIImageView, AWEDitoPOIFavoriteLabelsItemModel;

@interface AWEDitoPOIFavoriteLabelsCollectionCell : UICollectionViewCell

@property (retain, nonatomic) AWEDitoPOIFavoriteLabelsItemModel *model;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;

+ (id)labelFont;

- (void)configWithModel:(id)a0;
- (void)changeStatusWithSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
