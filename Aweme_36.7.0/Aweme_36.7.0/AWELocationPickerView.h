@class NSString, UIImageView, AWELocationModel, UIPickerView, UIButton;

@interface AWELocationPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource> {
    AWELocationModel *_location;
}

@property (retain, nonatomic) UIPickerView *locationPicker;
@property (retain, nonatomic) UIImageView *locationPickerIndicator;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimation:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 location:(id)a1 completion:(id /* block */)a2;
- (void)__onTouchBackgroundView;
- (void)__onTouchConfirmButton;
- (void)showAnimation;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (void)dealloc;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;

@end
