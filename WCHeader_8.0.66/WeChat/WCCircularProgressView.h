@class NSString, CADisplayLink, CAShapeLayer, UILabel;
@protocol WCCircularProgressViewDelegate;

@interface WCCircularProgressView : UIView {
    double _progressStepForFinishingAnimation;
    double _lastTappedTime;
}

@property (retain, nonatomic) CAShapeLayer *unfinishedShapeLayer;
@property (retain, nonatomic) CAShapeLayer *finishedShapeLayer;
@property (retain, nonatomic) CAShapeLayer *arrowLayer;
@property (retain, nonatomic) CAShapeLayer *tickLayer;
@property (retain, nonatomic) UILabel *successTipsLabel;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double realProgress;
@property (nonatomic) double radius;
@property (nonatomic) double progress;
@property (weak, nonatomic) id<WCCircularProgressViewDelegate> delegate;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *successTipText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)commonInit;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (void)applyFinishAnimation;
- (void)viewDidTapped:(id)a0;
- (void)updateCircularWithProgress:(double)a0 animated:(BOOL)a1;
- (void)updateArrowWithProgress:(double)a0;
- (void)updateTickWithProgress:(double)a0;
- (void)updateTextTipWithProgress:(double)a0;
- (void)updateAnimation;
- (void)startFinishAnimation;
- (void)stopFinishAnimation;
- (void).cxx_destruct;

@end
