@class IESLiveGradientView, UILabel;

@interface IESLiveSoloKTVStartButton : UIView

@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (retain, nonatomic) UILabel *startLabel;
@property (nonatomic) float progress;
@property (nonatomic) BOOL isShowStart;
@property (nonatomic) BOOL isShowRetry;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ didClickStartBlock;
@property (copy, nonatomic) id /* block */ didClickRetryBlock;

- (void)didClickStartButton:(id)a0;
- (void)showStartBtn;
- (void)showRetrybtn;
- (void)updateGradientView:(float)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateProgress:(float)a0;

@end
