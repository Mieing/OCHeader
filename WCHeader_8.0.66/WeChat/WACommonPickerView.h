@class NSArray, UIPickerView, NSString;
@protocol WACustomPickerDelegate;

@interface WACommonPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    BOOL _didAdjustSelectedRowToSeparatorStyle;
}

@property (retain, nonatomic) UIPickerView *customPicker;
@property (retain, nonatomic) NSArray *items;
@property (weak, nonatomic) id<WACustomPickerDelegate> delegate;
@property (nonatomic) long long selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initWithItems:(id)a0 supportDark:(BOOL)a1;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)getValue;
- (long long)getItemNum;
- (void)onConfirm;
- (void)onCancel;
- (void)adjustPickerSelectedRowToSeparatorStyle:(id)a0;
- (void).cxx_destruct;

@end
