@class CSJRewardedLiveProgressView, UIImageView, NSTimer, UIView, UILabel;
@protocol CSJRewardedLiveCountDownViewDelegate;

@interface CSJRewardedLiveCountDownView : UIView

@property (nonatomic) long long duration;
@property (nonatomic) long long leftCount;
@property (weak, nonatomic) id<CSJRewardedLiveCountDownViewDelegate> delegate;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) CSJRewardedLiveProgressView *progressView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *countDownContainer;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) NSTimer *timer;

- (void)creatSubViews;
- (void)updateCountDownText;
- (void)startTweenCountDown;
- (void)stopTweenCountDown;
- (void)updateLeftCount:(id)a0;
- (void)updateCountDown:(long long)a0 duration:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)dealloc;

@end
