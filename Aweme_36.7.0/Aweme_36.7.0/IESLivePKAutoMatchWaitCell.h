@class UIImageView, NSString, UIView;

@interface IESLivePKAutoMatchWaitCell : UICollectionViewCell <CAAnimationDelegate>

@property (retain, nonatomic) UIView *outskirtsView;
@property (retain, nonatomic) UIView *insideBorderView;
@property (retain, nonatomic) UIImageView *avatorImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remakeAvatorImageWithAlpha:(double)a0 leftOffset:(double)a1 rightOffset:(double)a2;
- (void)playAnimation:(id)a0 key:(id)a1;
- (void)setAvatorIamgeView:(id)a0 location:(long long)a1;
- (void)playCenterBorderAnimation;
- (void)setImageViewAlphaAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutUI;

@end
