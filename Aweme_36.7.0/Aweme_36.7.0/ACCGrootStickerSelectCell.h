@class CAGradientLayer, UIImageView, UIImage, UILabel, ACCGrootDetailsStickerModel;

@interface ACCGrootStickerSelectCell : UICollectionViewCell

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) ACCGrootDetailsStickerModel *model;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) UILabel *grootHashtagLabel;
@property (retain, nonatomic) UIImageView *grootImageView;
@property (retain, nonatomic) UILabel *speciesNameLabel;
@property (retain, nonatomic) UILabel *categoryNameLabel;
@property (retain, nonatomic) UILabel *commonNamelabel;
@property (retain, nonatomic) UILabel *similarityLabel;

- (void)configGrootStickerModel:(id)a0 grootModels:(id)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
