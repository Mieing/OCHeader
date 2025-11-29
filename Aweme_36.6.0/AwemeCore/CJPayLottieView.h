@class NSString, BDImageView, UIView;

@interface CJPayLottieView : UIView

@property (retain, nonatomic) UIView *lottieView;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL isReady;
@property (retain, nonatomic) BDImageView *defaultImageView;
@property (nonatomic) BOOL isReadyToPlay;

- (id)p_buildLottieViewWithUrl:(id)a0;
- (id)p_buildLottieViewWithDict:(id)a0;
- (void)p_checkStartResult;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;
- (id)initWithUrl:(id)a0;

@end
