@class BDXPickerSource, NSString, UIToolbar, UIView, UIPickerView, UIDatePicker;
@protocol BDXPickerSheetViewDelegate;

@interface BDXPickerSheetView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>

@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) UIDatePicker *datePicker;
@property (nonatomic) BOOL disabled;
@property (weak) id<BDXPickerSheetViewDelegate> delegate;
@property (retain, nonatomic) BDXPickerSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedIndexs;
- (void)backgroundOnClick:(id)a0;
- (void)cancelButtonOnClick:(id)a0;
- (void)confirmButtonOnClick:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)result;
- (void)showInView:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)setupViews;
- (double)componentWidth;

@end
