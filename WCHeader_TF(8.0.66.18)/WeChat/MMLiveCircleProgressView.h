@class UIColor, UIBezierPath, CAShapeLayer;
@protocol MMLiveCircleProgressViewDelegate;

@interface MMLiveCircleProgressView : UIView

@property (retain, nonatomic) UIColor *finishedColor;
@property (retain, nonatomic) UIColor *unfinishedColor;
@property (retain, nonatomic) CAShapeLayer *backGroundLayer;
@property (retain, nonatomic) CAShapeLayer *frontFillLayer;
@property (retain, nonatomic) UIBezierPath *backGroundBezierPath;
@property (retain, nonatomic) UIBezierPath *frontFillBezierPath;
@property (nonatomic) double lineWidth;
@property (nonatomic) double progressValue;
@property (weak, nonatomic) id<MMLiveCircleProgressViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
