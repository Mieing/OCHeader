@class UIBezierPath, CAShapeLayer;

@interface MMFinderGameLiveWelfareTaskDegreeCompletionView : UIView

@property (retain, nonatomic) CAShapeLayer *backGroundLayer;
@property (retain, nonatomic) CAShapeLayer *frontFillLayer;
@property (retain, nonatomic) UIBezierPath *backGroundBezierPath;
@property (retain, nonatomic) UIBezierPath *frontFillBezierPath;
@property (nonatomic) double progress;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
