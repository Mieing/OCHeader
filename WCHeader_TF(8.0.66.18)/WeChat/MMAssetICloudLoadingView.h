@class MMTimer, UIImageView, NSArray, NSString, MMUILabel;

@interface MMAssetICloudLoadingView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *loadingDotLabel;
@property (retain, nonatomic) MMTimer *animateTimer;
@property (nonatomic) long long animateDotIndex;
@property (retain, nonatomic) NSArray *animateDots;
@property (nonatomic) BOOL useShortTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isLoadFail;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)startDotAnimation;
- (void)stopDotAnimation;
- (void)onDotAnimateUpdate;
- (void)sizeToFitWidth:(double)a0;
- (void)layoutSubviews;
- (id)currentTitle;
- (void).cxx_destruct;

@end
