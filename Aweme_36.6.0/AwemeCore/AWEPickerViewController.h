@class NSString, UIView, UIPickerView, UIButton;
@protocol AWEPickerViewControllerDataProvider;

@interface AWEPickerViewController : UIViewController

@property (retain, nonatomic) NSString *confirmTitle;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) id<AWEPickerViewControllerDataProvider> dataProvider;
@property (copy, nonatomic) id /* block */ confirmButtonTapBlock;
@property (copy, nonatomic) id /* block */ maskViewTapBlock;

- (void)maskTapped:(id)a0;
- (id)initWithDataProvider:(id)a0 confirmTitle:(id)a1;
- (long long)selectedRowOfColumn:(long long)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)confirmButtonTapped:(id)a0;

@end
