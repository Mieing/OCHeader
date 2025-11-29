@class UIImageView, IESLiveSoundEffectProgressView, UILabel, UIView;

@interface IESLiveSoundEffectItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) IESLiveSoundEffectProgressView *progressView;
@property (retain, nonatomic) UIView *redDot;

- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (void)setIsSelected:(BOOL)a0;
- (void)prepareForReuse;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateProgress:(id)a0;
- (void)setIsHighlighted:(BOOL)a0;
- (void)layoutUI;

@end
