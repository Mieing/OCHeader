@class UIImageView, DUXButton, ACCAIGCUGCFusionCreationToolsDataController, UIImage, UIButton;

@interface ACCAIGCUGCFusionCreationToolsPreviewViewController : UIViewController

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (nonatomic) unsigned long long enterType;
@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsDataController *dataController;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ videoCompletionBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)confirmButtonDidClicked;
- (void)backButtonDidClicked:(id)a0;
- (BOOL)shouldUseNewImagePreviewStyle;
- (void)doneButtonDidClicked:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
