@class NSString, DUXCircularProgressLayer;

@interface ACCQuickSaveBarItemProgressView : UIView <ACCQuickSaveBarItemLoadingViewProtocol>

@property (retain, nonatomic) DUXCircularProgressLayer *circleProgressLayer;
@property (nonatomic) double progress;
@property (nonatomic) BOOL hdrEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hdrEnabled:(BOOL)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)resetProgress;
- (void)stopAnimation;
- (void)layoutSubviews;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateProgress:(double)a0;

@end
