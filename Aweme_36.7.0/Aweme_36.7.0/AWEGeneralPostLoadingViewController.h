@class UIView, ACCAnimatedButton, AWEGeneralPostLoadingErrorView, AWEGeneralPostSchemaModel, UIImageView, AWEGeneralPostPreloadTask, AWEGeneralPostLoadingProgressView, UILabel;

@interface AWEGeneralPostLoadingViewController : UIViewController

@property (retain, nonatomic) AWEGeneralPostSchemaModel *schemaModel;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEGeneralPostLoadingProgressView *progressView;
@property (retain, nonatomic) AWEGeneralPostLoadingErrorView *errorView;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) AWEGeneralPostPreloadTask *preloadTask;

- (void)backClicked;
- (void)setupObserve;
- (void)routeToEdit;
- (void)trackLoadingStatus:(id)a0 failReason:(id)a1;
- (void)taskEnterNextPageUploadWithCompserModel:(id)a0 themeId:(id)a1;
- (id)initWithSchemaModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
