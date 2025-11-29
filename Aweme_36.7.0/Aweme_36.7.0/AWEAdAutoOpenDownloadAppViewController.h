@class UIImageView, AWEAwemeModel, UILabel, UIButton;
@protocol AWEAdAutoOpenDownloadAppViewControllerDelegate;

@interface AWEAdAutoOpenDownloadAppViewController : UIViewController

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<AWEAdAutoOpenDownloadAppViewControllerDelegate> delegate;

- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
