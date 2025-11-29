@class TTVideoEngine, NSString, UIView, AWEButton, AWEECHalfPostDataController, AWEGradientView, AWEECPostShareInfoResponse, UIImageView, AWEUILoadingView, UILabel;

@interface AWEECHalfPostViewController : UIViewController

@property (retain, nonatomic) AWEECPostShareInfoResponse *shareInfo;
@property (retain, nonatomic) AWEECHalfPostDataController *dataController;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (retain, nonatomic) UIView *previewBGView;
@property (retain, nonatomic) UIView *backgroundContentView;
@property (retain, nonatomic) AWEButton *playButton;
@property (retain, nonatomic) AWEGradientView *linearGradientView;
@property (retain, nonatomic) UIView *contentMaskView;
@property (retain, nonatomic) TTVideoEngine *videoPlayer;
@property (retain, nonatomic) AWEGradientView *coverGradientPlaceholderView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *anchorTitleLabel;
@property (retain, nonatomic) UILabel *anchorDescLabel;
@property (retain, nonatomic) AWEButton *confirmButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) id /* block */ didClosePostPanel;

- (void)closePanel;
- (void)dismissLoadingView;
- (void)addObserve;
- (void)playViewWillResignActive:(id)a0;
- (void)playerViewDidBecomeActive:(id)a0;
- (id)gradientViewWithColors:(id)a0 locations:(id)a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endPoint:(struct CGPoint { double x0; double x1; })a3;
- (void)playerViewDidTapped;
- (void)commitPost;
- (void)playButtonDidSelected;
- (id)initWithPostParameters:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)showLoadingView;

@end
