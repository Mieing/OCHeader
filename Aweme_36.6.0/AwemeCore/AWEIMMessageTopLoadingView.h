@class AWEIMMessageLoadingCircleView;

@interface AWEIMMessageTopLoadingView : UIView

@property (retain, nonatomic) AWEIMMessageLoadingCircleView *loadingAnimView;

+ (double)viewSize;

- (void)startAnim;
- (void)stopAnim;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
