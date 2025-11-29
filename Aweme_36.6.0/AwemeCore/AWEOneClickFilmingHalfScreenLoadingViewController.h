@class UIView, NSTimer, NSArray, ACCIntelligentMovieService, AWEVideoPublishViewModel, UIImageView, UIButton, NSString, AWESelectTemplateDataExporter, AWESelectTemplateDataProvider, UILabel;

@interface AWEOneClickFilmingHalfScreenLoadingViewController : UIViewController

@property (copy, nonatomic) NSArray *assetArray;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCIntelligentMovieService *movieService;
@property (retain, nonatomic) AWESelectTemplateDataProvider *dataProvider;
@property (retain, nonatomic) AWESelectTemplateDataExporter *dataExporter;
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
@property (nonatomic) unsigned long long errorType;
@property (nonatomic) double startOffset;
@property (nonatomic) int progress;
@property (nonatomic) unsigned long long progressStep;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) int step1MaxPercentage;
@property (nonatomic) int step2MaxPercentage;
@property (nonatomic) int step3MaxPercentage;
@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ closeButtonAction;

- (void)closeButtonClick:(id)a0;
- (id)initWithAssetArray:(id)a0 publishModel:(id)a1 movieService:(id)a2;
- (void)showErrorTipWithType:(unsigned long long)a0;
- (void)resetViewStatus;
- (void)errorTipsButtonClick:(id)a0;
- (void)requestDataHandler:(BOOL)a0;
- (void)progressHandler:(unsigned long long)a0 progress:(double)a1;
- (void)finishStepProgressUpdate:(unsigned long long)a0;
- (void)startStepProgressUpdate:(unsigned long long)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)requestData;
- (void)dealloc;
- (void)deactivateTimer;
- (void)setupUI;
- (void)setupCornerRadius;
- (void)setupData;
- (void)updateProgress:(int)a0;
- (void)showError:(id)a0;

@end
