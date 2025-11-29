@class AWEPlayInteractionContext, UIImageView, UIView, AWECampaignGeneralActivityButtonUIInfo, UILabel;

@interface AWEPlayInteractionGeneralActivityButton : UIButton

@property (retain, nonatomic) AWECampaignGeneralActivityButtonUIInfo *buttonInfo;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (copy, nonatomic) id /* block */ playPeriodChangeBlock;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *activityTitleLabel;
@property (nonatomic) double realDelayTime;
@property (nonatomic) BOOL hasChangedColor;

- (id)hexColorFromString:(id)a0;
- (void)removeVideoPlayPeriodObserver;
- (void)addVideoPlayPeriodObserver;
- (void)updateByActivityButtonInfo:(id)a0 delayShowTime:(long long)a1 videoDuration:(double)a2 isSingleButton:(BOOL)a3 isFirst:(BOOL)a4 context:(id)a5;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
