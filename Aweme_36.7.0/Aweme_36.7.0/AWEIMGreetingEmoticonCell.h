@class UIImageView;

@interface AWEIMGreetingEmoticonCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;

+ (id)identifier;

- (void)stopAnimationIfNeed;
- (void)startAnimationIfNeed;
- (void)configWithGreetingEmoticonModel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
