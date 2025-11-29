@class AWEAwemeModel, NSString, UIView, AWERVNewDetailPageContext, AWEGradientView, UIImageView, UIButton, UILabel;
@protocol AWEAntiAddictedNoticeBarViewProtocol, AWERVNewDetailPlayInteractionViewDelegate;

@interface AWERVNewDetailPlayInteractionView : UIView

@property (retain, nonatomic) UILabel *leftTimeLabel;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UIView<AWEAntiAddictedNoticeBarViewProtocol> *mixVideoInfoBar;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIView *controlView;
@property (nonatomic) double interactionViewHeight;
@property (nonatomic) double progress;
@property (nonatomic) double lastPlayDuration;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWERVNewDetailPlayInteractionViewDelegate> delegate;
@property (retain, nonatomic) AWERVNewDetailPageContext *context;

- (void)playLoadingAnimation;
- (void)configWithAwemeModel:(id)a0;
- (void)controlViewClicked;
- (void)configMixInfoBarWithModel:(id)a0;
- (void)updateLeftTimeWithSecond:(double)a0;
- (void)videoActionButtonClicked;
- (void)switchVideoActionButtonToPlay:(unsigned long long)a0;
- (void)updatePlayProgressWithTime:(double)a0 totalDuration:(double)a1;
- (void)trackMixEntranceShow;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (void)stopLoadingAnimation;

@end
