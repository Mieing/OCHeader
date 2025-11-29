@class FixTitleColorButton, NSString, WABasePickerViewModel, UIView, UIPickerView;
@protocol WAPickerViewDelegate;

@interface WABasePickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    BOOL _supportDark;
    BOOL _didAdjustSelectedRowToSeparatorStyle;
}

@property (retain, nonatomic) UIPickerView *customPicker;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) FixTitleColorButton *cancelButton;
@property (retain, nonatomic) FixTitleColorButton *confirmButton;
@property (retain, nonatomic) WABasePickerViewModel *model;
@property (weak, nonatomic) id<WAPickerViewDelegate> delegate;
@property (nonatomic) BOOL bOnlyShowPickerAndButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initPickerWithViewModel:(id)a0 supportDark:(BOOL)a1;
- (void)setupUI;
- (id)customPickerView;
- (void)setViewModel:(id)a0;
- (void)updatePickerViewSelectedRow;
- (void)updatePickerView:(id)a0 current:(long long)a1 column:(long long)a2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)showPickerWithCompletion:(id /* block */)a0;
- (void)touchMask:(id)a0;
- (void)hidePickerWithCompletion:(id /* block */)a0;
- (void)onConfirm;
- (void)onCancel;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (unsigned long long)itemStrLengthForRow:(long long)a0 forComponent:(long long)a1;
- (double)contentHeight;
- (void).cxx_destruct;

@end
