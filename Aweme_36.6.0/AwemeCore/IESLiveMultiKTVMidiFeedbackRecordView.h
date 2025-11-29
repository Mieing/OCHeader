@class IESLiveMultiKTVMIDIFeedbackResult, IESLiveMultiKTVMidiFeedbackRecordViewConfig, UIImageView, IESLiveKTVGradientLabel, UILabel;

@interface IESLiveMultiKTVMidiFeedbackRecordView : UIView

@property (retain, nonatomic) IESLiveMultiKTVMidiFeedbackRecordViewConfig *config;
@property (retain, nonatomic) IESLiveMultiKTVMIDIFeedbackResult *result;
@property (retain, nonatomic) UIImageView *userAvatar;
@property (retain, nonatomic) UILabel *topTipLabel;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UILabel *songLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *scoreNumberLabel;
@property (retain, nonatomic) IESLiveKTVGradientLabel *scoreUnitLabel;
@property (retain, nonatomic) UIImageView *bgEffectView;
@property (retain, nonatomic) UIImageView *highScoreSign;

- (id)initWithFeedbackResult:(id)a0;
- (void)setupBGViews;
- (id)getLineViewWithReverse:(BOOL)a0;
- (id)getBackgroundViewWithHigh:(BOOL)a0;
- (void)didTapAvatarView;
- (void).cxx_destruct;
- (void)setupViews;

@end
