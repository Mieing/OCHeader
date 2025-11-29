@class NSString, UIImageView, CAShapeLayer, UILabel;
@protocol BU_ASValuePopUpViewDelegate;

@interface BU_ASValuePopUpView : UIView <CAAnimationDelegate> {
    BOOL _shouldAnimate;
    double _animDuration;
    CAShapeLayer *_pathLayer;
    UIImageView *_imageView;
    UILabel *_timeLabel;
    double _arrowCenterOffset;
    CAShapeLayer *_colorAnimLayer;
}

@property (weak, nonatomic) id<BU_ASValuePopUpViewDelegate> delegate;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double arrowLength;
@property (nonatomic) double widthPaddingFactor;
@property (nonatomic) double heightPaddingFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)pathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withArrowOffset:(double)a1;
- (id)opaqueColor;
- (void)setAnimatedColors:(id)a0 withKeyTimes:(id)a1;
- (void)setAnimationOffset:(double)a0 returnColor:(id /* block */)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowOffset:(double)a1;
- (void)animateBlock:(id /* block */)a0;
- (void)hideAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setColor:(id)a0;
- (id)color;
- (void)layoutSubviews;
- (void)showAnimated:(BOOL)a0;

@end
