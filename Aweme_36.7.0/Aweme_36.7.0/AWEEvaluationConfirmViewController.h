@class NSArray, UIImageView, NSString, UILabel, AWEEvaluationTaskModel, UIButton;

@interface AWEEvaluationConfirmViewController : UIViewController <AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *timeLable;
@property (retain, nonatomic) UILabel *descriptionLable;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) AWEEvaluationTaskModel *taskModel;
@property (copy, nonatomic) NSArray *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backButtonClick:(id)a0;
- (BOOL)validateURL:(id)a0 whiteList:(id)a1;
- (void)updateTaskData:(id)a0;
- (long long)totalTask;
- (void)ConfirmButtonClick;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
