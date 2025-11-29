@class AWEAlbumAutoFilmUIConfig, UIImageView, NSTimer, UILabel, UIView, UIButton;

@interface AWEAlbumAutoFilmViewController : UIViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) UIView *thumbnailImageViewMaskView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *errorTipsLabel;
@property (retain, nonatomic) UIButton *errorTipsButton;
@property (retain, nonatomic) AWEAlbumAutoFilmUIConfig *uiConfig;
@property (nonatomic) BOOL hasAppeared;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long progress;
@property (nonatomic) long long maxProgress;
@property (nonatomic) unsigned long long errorType;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (copy, nonatomic) id /* block */ closeBlock;

- (void)closeButtonClick:(id)a0;
- (void)fadeOut:(id /* block */)a0;
- (void)updateThumbnailImage:(id)a0;
- (void)startProgressUpdateForStage:(long long)a0;
- (void)updateProgressContent:(long long)a0;
- (void)removeProgressTimer;
- (void)startProgressUpdateWithInterval:(double)a0;
- (void)showErrorTipWithType:(unsigned long long)a0;
- (void)resetViewStatus;
- (void)errorTipsButtonClick:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)fadeIn;
- (void)setupUI;
- (void)setupCornerRadius;
- (void)setupData;
- (void)showError:(id)a0;

@end
