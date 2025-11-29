@class IESECCartSkeletonHeader, IESECCartSkeletonFooter, UIImageView, CAGradientLayer, UIView, IESECUIButton, CABasicAnimation;
@protocol IESECCartSkeletonDelegate;

@interface IESECCartSkeletonView : UIView

@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (retain, nonatomic) IESECUIButton *backButton;
@property (retain, nonatomic) UIView *headerContentView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESECCartSkeletonHeader *skeletonHeader;
@property (retain, nonatomic) IESECCartSkeletonFooter *skeletonFooter;
@property (retain, nonatomic) UIImageView *bodyImageView;
@property (weak, nonatomic) id<IESECCartSkeletonDelegate> delegate;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) CABasicAnimation *moveAnimation;

- (void)closeCart;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithDelegate:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
