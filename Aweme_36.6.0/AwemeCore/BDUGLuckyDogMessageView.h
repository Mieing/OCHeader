@class BDUGLuckyDogMessageModel, UIWindow, UIImageView, NSTimer, UILabel, UIView;

@interface BDUGLuckyDogMessageView : BDUGLuckyDogAlertBaseView

@property (retain, nonatomic) UIView *alertView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *finishButtonBackgroundView;
@property (retain, nonatomic) UILabel *finishButtonTitleLabel;
@property (retain, nonatomic) NSTimer *autoDisappearTimer;
@property (retain, nonatomic) BDUGLuckyDogMessageModel *model;
@property (weak, nonatomic) UIWindow *topView;
@property (nonatomic) long long lastOrientation;

- (void)messageClicked;
- (id)findTopVisibleWindow;
- (double)autoSafeTop;
- (void)doOrientationDidChangeNotification;
- (void)__removeAndFinishMessage;
- (id)initWithModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)hide;
- (void)_setup;
- (void)dealloc;
- (void)show;

@end
