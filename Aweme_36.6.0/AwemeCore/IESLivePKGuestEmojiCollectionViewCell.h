@class IESLivePKGuestGradientBackgroundLabel, UIImageView, UIImage, HTSPaddingLabel;

@interface IESLivePKGuestEmojiCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) HTSPaddingLabel *bottomLabel;
@property (retain, nonatomic) IESLivePKGuestGradientBackgroundLabel *tagLabel;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
