@class AWEProfileEditDatePickerView;

@interface AWEProfileEditDatePickerViewController : UIViewController

@property (retain, nonatomic) AWEProfileEditDatePickerView *pickerView;

+ (Class)aAWEPadModuleAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)aAWEPadModuleAdapter;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)tapAction:(id)a0;

@end
