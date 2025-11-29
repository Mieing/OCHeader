@class IESLiveSoloKTVPreviewModelV2, IESLiveSoloKTVVideoContainerV2, IESLiveSoloKTVPieceTitleView, UIButton;

@interface IESLiveSoloKTVPreviewControllerV2 : UIViewController

@property (retain, nonatomic) IESLiveSoloKTVPreviewModelV2 *model;
@property (retain, nonatomic) IESLiveSoloKTVPieceTitleView *titleView;
@property (retain, nonatomic) IESLiveSoloKTVVideoContainerV2 *playerView;
@property (retain, nonatomic) UIButton *saveDraftBtn;
@property (retain, nonatomic) UIButton *publishBtn;
@property (nonatomic) BOOL isFromViewWillDisappear;
@property (nonatomic) long long scaleRatio;

- (void)initView;
- (id)initWithPreviewModel:(id)a0;
- (void)trackPreviewPageShow;
- (void)trackEditPageButtonClickWithType:(id)a0;
- (void)trackReturnClick;
- (void)exportVideoWithExportType:(long long)a0;
- (void)saveDraftClick:(id)a0;
- (void)publishClick:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)addObserver;
- (void)didBecomeActive:(id)a0;
- (void)willResignActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initData;

@end
