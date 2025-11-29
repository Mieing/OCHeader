@class MMUIActivityIndicatorView, UIImageView, MMFinderLiveTaskId, UILabel, UIView;

@interface MMFinderLiveConnectMicPkProgressTimeIndicator : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *pkLogoIcon;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) MMUIActivityIndicatorView *calLoadingView;
@property (retain, nonatomic) UILabel *calcTipLabel;
@property (retain, nonatomic) UIImageView *designatedGiftIconView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long lastPkState;
@property (nonatomic) unsigned int lastDisplayedTime;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)initViews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)updatePkStateUI:(id)a0;
- (id)liveTask;
- (void).cxx_destruct;

@end
