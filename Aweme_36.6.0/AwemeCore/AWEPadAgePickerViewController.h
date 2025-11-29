@class AWEPadAgePickerViewModel, AWEPadChildDatePicker, DUXButton, UILabel, DUXTextTag, UIButton;

@interface AWEPadAgePickerViewController : UIViewController

@property (retain, nonatomic) UIButton *selectBoyIcon;
@property (retain, nonatomic) UIButton *selectGirlIcon;
@property (retain, nonatomic) UILabel *genderLabel;
@property (retain, nonatomic) UILabel *boyLabel;
@property (retain, nonatomic) UILabel *girlLabel;
@property (retain, nonatomic) UILabel *agePickerLabel;
@property (retain, nonatomic) DUXTextTag *ageTag;
@property (retain, nonatomic) UILabel *dataPickerLabel;
@property (retain, nonatomic) AWEPadChildDatePicker *datePicker;
@property (retain, nonatomic) DUXButton *commitButton;
@property (copy, nonatomic) id /* block */ commitAction;
@property (retain, nonatomic) AWEPadAgePickerViewModel *viewModel;

- (id)dux_titleForColoseButton;
- (void)genderIconShouldSelected;
- (void)tapSelectBoy;
- (void)tapSelectGirl;
- (id)dateToDetailOld:(id)a0;
- (void)commitAction:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
