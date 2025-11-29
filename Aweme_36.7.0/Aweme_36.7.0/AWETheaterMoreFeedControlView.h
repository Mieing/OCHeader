@class NSDictionary, UIImageView, AWEAwemeModel, UIView, UILabel, UIVisualEffectView;
@protocol AWEVideoTryWatchViewProtocol;

@interface AWETheaterMoreFeedControlView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *soundImageView;
@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *tryWatchView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) UILabel *lockLabel;
@property (nonatomic) long long totalSeconds;
@property (copy, nonatomic) NSDictionary *iaaTrackParams;
@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ soundImageViewTapped;

- (void)configWithSectionItem:(id)a0;
- (void)updateSoundImageViewShowStatus:(BOOL)a0;
- (void)configTryWatch:(id)a0;
- (void)showPaymentFinishView:(BOOL)a0;
- (void)updatePaymentTryWatchViewCurrentTime:(double)a0;
- (void)configTag:(id)a0;
- (void)configLongVideoIAATryWatchView:(id)a0;
- (BOOL)p_enableShowTryWatch:(id)a0;
- (BOOL)hasIAARewardForAwemeModel:(id)a0;
- (void)handleSoundImageView;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 totalTimeInterval:(double)a1;
- (void)paidStreamStart:(id)a0;
- (void)paidStreamFinished;
- (void)updateSoundImageView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)configureConstraints;
- (void)configureSubviews;

@end
