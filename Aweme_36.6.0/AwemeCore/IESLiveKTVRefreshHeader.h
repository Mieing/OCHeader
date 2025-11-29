@class UILabel, UIView;

@interface IESLiveKTVRefreshHeader : MJRefreshHeader

@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UILabel *textLabel;

- (id)animatedViewWithImageName:(id)a0;
- (id)animatedViewWithLottieFile:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
