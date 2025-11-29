@class UIPanGestureRecognizer, UIView;
@protocol AWEECOMIMVideoBottomSliderViewDelegate;

@interface AWEECOMIMVideoBottomSliderView : AWEECOMIMCustomBaseView

@property (retain, nonatomic) UIView *watchedProgressView;
@property (retain, nonatomic) UIView *cacheProgressView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastPanLocation;
@property (nonatomic) BOOL duringDrag;
@property (nonatomic) double cacheProgress;
@property (nonatomic) double watchedProgress;
@property (weak, nonatomic) id<AWEECOMIMVideoBottomSliderViewDelegate> delegate;

- (void)handlePanGes:(id)a0;
- (void)updateThumbFrame;
- (void).cxx_destruct;
- (void)customInit;
- (void)layoutSubviews;

@end
