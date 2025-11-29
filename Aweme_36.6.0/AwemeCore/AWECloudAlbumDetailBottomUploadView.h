@class EcTaskStatus, UIView, UILabel, EcTaskProgress, UIImageView, UIButton, UIProgressView, ACCButton;
@protocol ACCUIAlertViewProtocol;

@interface AWECloudAlbumDetailBottomUploadView : UIView

@property (retain, nonatomic) EcTaskStatus *taskStatus;
@property (retain, nonatomic) EcTaskProgress *taskProgress;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) UIView *spStateView;
@property (retain, nonatomic) UILabel *spStatePrefixLabel;
@property (retain, nonatomic) UILabel *spStateTitleLabel;
@property (retain, nonatomic) UILabel *uploadingTitleLabel;
@property (retain, nonatomic) ACCButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) unsigned long long prevDoneBytes;
@property (weak, nonatomic) id<ACCUIAlertViewProtocol> curAlertView;
@property (retain, nonatomic) UIImageView *assetImageView;
@property (copy, nonatomic) id /* block */ resumeAction;
@property (copy, nonatomic) id /* block */ retryAction;
@property (copy, nonatomic) id /* block */ pauseAction;
@property (copy, nonatomic) id /* block */ cancelAction;

- (void)onActionButtonAction:(id)a0;
- (void)onCloseButtonAction:(id)a0;
- (void).cxx_destruct;
- (void)updateStatus:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)updateProgress:(id)a0;

@end
