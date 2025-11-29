@class UIImageView, AFDUserWorkCellViewModel, UILabel, UIView;

@interface AFDUserWorkCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AFDUserWorkCellViewModel *viewModel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *promptImageView;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) UIView *bgMaskView;
@property (nonatomic) long long currentImageRequestID;
@property (nonatomic) double aspectRatio;

+ (void)requestImageWithURL:(id)a0 enableSmartCrop:(BOOL)a1 aspectRatio:(double)a2 completion:(id /* block */)a3;

- (void)configWithViewModel:(id)a0 animated:(BOOL)a1;
- (void)refreshLayerAnimation;
- (void)configCornerRadius:(double)a0 maskLeftCorners:(BOOL)a1 maskRightCorners:(BOOL)a2;
- (void)p_setImage:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
