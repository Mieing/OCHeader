@class UIView, UIDatePicker, NSString, UIButton, AWEHideElement, NSDateFormatter, UILabel, DUXDivider;
@protocol AWESettingSwitchProtocol;

@interface AWEProfileEditDatePickerView : UIView <AWEProfileEditDatePickerViewProtocol>

@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) AWEHideElement *hideElement;
@property (retain, nonatomic) UILabel *hideLabel;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *hideSwitch;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) NSDateFormatter *customDateFormatter;
@property (nonatomic) BOOL showSwitch;
@property (retain, nonatomic) NSString *birthday;
@property (nonatomic) BOOL showCancelButton;
@property (nonatomic) BOOL disableDayLightSavingTimeOffset;
@property (copy, nonatomic) id /* block */ dateChangeBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly, copy, nonatomic) NSString *minimumDateStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)showProfileEditDatePickWithModel:(id)a0 valueChange:(id /* block */)a1 cancel:(id /* block */)a2 completion:(id /* block */)a3;
+ (Class)aAWEUserNewUserProfileEditAdapterProtocolClass;
+ (id)initialDateString;
+ (id)dateFormatter;

- (id)aAWEPadModuleAdapter;
- (void)setDatePickerRangeWithMinimumDate:(id)a0 maximumDate:(id)a1;
- (id)aAWEUserNewUserProfileEditAdapterProtocol;
- (void)addDividerToTopToolBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 customDateFormatter:(id)a1;
- (void)handleSettingChange:(id)a0;
- (void)configDatePicker:(id)a0;
- (void)dataPickerSelected:(id)a0;
- (id)dateFormatter;
- (void)dismiss;
- (void).cxx_destruct;
- (void)cancelAction;
- (void)layoutSubviews;
- (void)setTitleText:(id)a0;
- (void)dismiss:(id /* block */)a0;
- (void)confirm;
- (void)setTextFontSize:(long long)a0;

@end
