@class NSString, UIDatePicker, UIPickerView;
@protocol WADateTimePickerDelegate;

@interface WADateTimePickerView : WABasePickerView <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIDatePicker *_picker;
    UIPickerView *_customPicker;
    NSString *_format;
    long long _pickerMode;
    int _customMode;
    int _curYear;
    int _curMonth;
    int _minYear;
    int _maxYear;
    int _minMonth;
    int _maxMonth;
    int _minCurrentMonth;
    int _maxCurrentMonth;
    BOOL _didAdjustSelectedRowToSeparatorStyle;
}

@property (weak, nonatomic) id<WADateTimePickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initPicker:(long long)a0 field:(id)a1 supportDark:(BOOL)a2;
- (id)customPickerView;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (void)resetMonth;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)setValue:(id)a0;
- (void)setCurrent:(int)a0 month:(int)a1;
- (void)setRangeFrom:(id)a0 toEnd:(id)a1;
- (id)getValue;
- (void)onConfirm;
- (void)onCancel;
- (void)adjustPickerSelectedRowToSeparatorStyle:(id)a0;
- (void).cxx_destruct;

@end
