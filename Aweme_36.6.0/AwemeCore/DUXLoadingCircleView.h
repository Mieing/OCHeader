@class NSString, UIColor, DUXCircularProgressLayer;

@interface DUXLoadingCircleView : UIView <DUXLoadingViewProtocol, DUXProgressViewProtocol>

@property (retain, nonatomic) DUXCircularProgressLayer *circleProgressLayer;
@property (nonatomic) double viewSize;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double scalingFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (nonatomic) double maxScale;
@property (nonatomic) long long type;
@property (nonatomic) long long style;
@property (nonatomic) double maxProgress;
@property (retain, nonatomic) NSString *unitString;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateFrameIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andType:(long long)a1 andStyle:(long long)a2;
- (double)getProgress;
- (void)updateProgress:(double)a0 inDuration:(double)a1;
- (void)stopLoadingAnimated:(BOOL)a0;
- (id)initWithType:(long long)a0 andStyle:(long long)a1;
- (void)setCircleProgressLayerColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andType:(long long)a1 andStyle:(long long)a2 enlargeType:(unsigned long long)a3;
- (id)colorWithDynamicColor:(id)a0;
- (void).cxx_destruct;
- (void)resetProgress;
- (id)initWithType:(long long)a0;
- (id)init;
- (void)startLoading;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateProgress:(double)a0;

@end
