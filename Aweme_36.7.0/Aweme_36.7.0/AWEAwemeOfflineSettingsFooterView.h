@class UIButton;
@protocol AWEAwemeOfflineSettingsFooterViewDelegate;

@interface AWEAwemeOfflineSettingsFooterView : UIView

@property (retain, nonatomic) UIButton *downloadAndUpdateButton;
@property (retain, nonatomic) UIButton *clearCacheButton;
@property (retain, nonatomic) UIButton *pauseAndContinueButton;
@property (weak, nonatomic) id<AWEAwemeOfflineSettingsFooterViewDelegate> delegate;

- (void)clickDownloadAndUpdateButton;
- (void)clickClearCacheButton;
- (void)clickPauseAndContinueButton;
- (void)updateButtonState:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
