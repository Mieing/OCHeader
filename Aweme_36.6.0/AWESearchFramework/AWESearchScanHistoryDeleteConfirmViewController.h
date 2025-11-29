@class UILabel, UIButton;

@interface AWESearchScanHistoryDeleteConfirmViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) id /* block */ confirmButtonTappedCallback;
@property (copy, nonatomic) id /* block */ cancelButtonTappedCallback;

- (void)confirmButtonTapped;
- (void)configUI;
- (void)setupCorner;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)cancelButtonTapped;
- (void)updateTitle:(id)a0;

@end
