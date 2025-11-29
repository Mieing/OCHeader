@class UILabel, NSString, AWEIMGroupEntrySettingMenuModel, UIView, UIPickerView, UIButton;

@interface AWEIMGroupEntryLimitsPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain, nonatomic) AWEIMGroupEntrySettingMenuModel *entrySetting;
@property (copy, nonatomic) NSString *selectedValue;
@property (retain, nonatomic) UIButton *bgButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) id /* block */ updateGroupEntryLimitBlock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } superViewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEntrySettingModel:(id)a0 selectedValue:(id)a1;
- (void)closePickerView;
- (void)bgButtonClickedAction:(id)a0;
- (void)confirmButtonClickedAction:(id)a0;
- (void)cancelButtonClickedAction:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)setupUI;

@end
