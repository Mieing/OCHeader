@class CAShapeLayer;

@interface WCAdInteractionArcProgressView : WCAdInteractionContentView

@property (nonatomic) double currentProgress;
@property (retain, nonatomic) CAShapeLayer *progressArcLayer;
@property (retain, nonatomic) CAShapeLayer *progressDotLayer;

- (void)organizeSubContentViews;
- (void)updateProgressWith:(double)a0;
- (void).cxx_destruct;

@end
