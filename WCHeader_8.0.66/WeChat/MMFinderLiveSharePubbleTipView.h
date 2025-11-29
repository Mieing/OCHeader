@class UIView, MMUIImageView, UITapGestureRecognizer, NSString, UIFont, CAShapeLayer, MMUILabel, MMUIButton, MMTimer;

@interface MMFinderLiveSharePubbleTipView : MMRectTriangleArrowView {
    id /* block */ _clickCloseBlock;
    id /* block */ _clickPubbleBlock;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIImageView *imageView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) MMTimer *dismissTimer;
@property (copy, nonatomic) id /* block */ dismissTimerCallback;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) double customCornerRadius;
@property (nonatomic) unsigned long long numbersOfLines;
@property (nonatomic) long long titleTextAlignment;

+ (double)caculatePubbleTipViewWidthWithType:(long long)a0 titleText:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 orientation:(long long)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateCustomCornerRadius:(double)a0;
- (void)layoutContentView;
- (void)layoutImageView;
- (void)layoutTitleLabel;
- (void)layoutCloseButton;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)contentHeight;
- (void)clickCloseButton:(id)a0;
- (void)onBackViewDidTaped:(id)a0;
- (void)setClickCloseBlock:(id /* block */)a0;
- (void)setClickPubbleBlock:(id /* block */)a0;
- (void)setDismissTimeS:(unsigned int)a0 callBack:(id /* block */)a1;
- (void)callDismissTimerCallback;
- (void).cxx_destruct;

@end
