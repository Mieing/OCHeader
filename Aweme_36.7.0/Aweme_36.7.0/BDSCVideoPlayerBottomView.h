@class BDSCButton, UIView;

@interface BDSCVideoPlayerBottomView : UIView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) BDSCButton *settingButton;
@property (retain, nonatomic) BDSCButton *closeCastButton;
@property (retain, nonatomic) BDSCButton *retryButton;
@property (copy, nonatomic) id /* block */ settingsBlock;
@property (copy, nonatomic) id /* block */ closeCastBlock;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (copy, nonatomic) id /* block */ greyModeClickedBlock;
@property (nonatomic) BOOL disableSetting;

- (void)updateButtonType:(long long)a0;
- (void)updateLandscapeStyle:(BOOL)a0;
- (void)updateCloseTitle:(id)a0;
- (void)setupMakeConstraintsPortrait;
- (void)setupMakeConstraintsLandscape;
- (void)onSetting:(id)a0;
- (void)onCloseCast:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupSubviews;
- (void)onRetry:(id)a0;

@end
