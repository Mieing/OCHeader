@class UIImageView, UIImage, UILabel;

@interface IESLiveInteractionAvatarEmojiCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UILabel *avatarTitle;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
