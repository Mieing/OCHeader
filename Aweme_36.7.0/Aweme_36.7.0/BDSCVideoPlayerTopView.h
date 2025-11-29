@class UIButton, BDSCButton, BDSCVideoPlayerIndicatorView, NSString, UILabel, BDSCImageView, BDSCLoadingLabel;
@protocol BDSCVideoPlayerTopViewDelegate;

@interface BDSCVideoPlayerTopView : UIView

@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) BDSCButton *feedbackButton;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) BDSCLoadingLabel *loadingLabel;
@property (retain, nonatomic) UIButton *changeDeviceButton;
@property (retain, nonatomic) BDSCImageView *changeDeviceImage;
@property (retain, nonatomic) BDSCVideoPlayerIndicatorView *indicatorView;
@property (nonatomic) unsigned long long currentStyle;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) id<BDSCVideoPlayerTopViewDelegate> delegate;

- (void)closeButtonClicked:(id)a0;
- (void)settingButtonClicked:(id)a0;
- (void)updateInGreyMode:(BOOL)a0;
- (void)updateIndicatorViewHidden:(BOOL)a0;
- (void)feedbackButtonClicked:(id)a0;
- (void)onChangeDeviceButton:(id)a0;
- (void)updateFeedbackButtonHidden:(BOOL)a0;
- (void)setupMakeConstraints;
- (void)setupMakeConstraintsV2;
- (void)updateStyleV2:(unsigned long long)a0;
- (void)setupSubviewsV2;
- (void)updateChangeDeviceButtonHidden:(BOOL)a0;
- (void)updateSettingButtonHidden:(BOOL)a0;
- (void)updateExitAndSettingButtonHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void)updateStyle:(unsigned long long)a0;
- (void)setupSubviews;

@end
