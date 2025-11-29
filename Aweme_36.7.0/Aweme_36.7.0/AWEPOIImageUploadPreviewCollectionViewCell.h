@class UIImageView;

@interface AWEPOIImageUploadPreviewCollectionViewCell : UICollectionViewCell

@property (nonatomic) long long index;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImageView *cancelImageView;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) id /* block */ didTap;

+ (double)cellHeight;

- (void)setupMask;
- (void)updateWithIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithImage:(id)a0;
- (void)tapAction;

@end
