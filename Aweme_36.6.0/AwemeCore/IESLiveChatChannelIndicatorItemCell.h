@class CAGradientLayer, NSString, UIImageView, CADisplayLink, UIScrollView, UIView, UILabel;

@interface IESLiveChatChannelIndicatorItemCell : UICollectionViewCell <UIScrollViewDelegate>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayerLeft;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayerRight;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayerBoth;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleLabelClone;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (retain, nonatomic) UIView *redDotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWithItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)setupUI;

@end
