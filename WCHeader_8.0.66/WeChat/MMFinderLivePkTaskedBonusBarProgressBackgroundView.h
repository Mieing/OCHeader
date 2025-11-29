@class NSArray, CAShapeLayer, MMTimer, UIView, NSString, MMFinderLivePkTaskedBonusModel;

@interface MMFinderLivePkTaskedBonusBarProgressBackgroundView : UIView <MMFinderLivePkTaskedBonusBarBackgroundView>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *foregroundView;
@property (retain, nonatomic) CAShapeLayer *foregroundMaskLayer;
@property (retain, nonatomic) MMFinderLivePkTaskedBonusModel *model;
@property (retain, nonatomic) NSArray *progressItems;
@property (nonatomic) double progress;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) unsigned long long elapsedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateWithModel:(id)a0;
- (void)layoutSubviews;
- (void)onTimerTick;
- (struct CGPath { } *)createMaskingPathWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateForegroundViewTransformForProgress:(double)a0;
- (void).cxx_destruct;

@end
