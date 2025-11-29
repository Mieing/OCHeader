@class UIColor, NSArray, NSString, NSMutableArray;
@protocol MMCommonPickerDelegate;

@interface MMCommonPickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource>

@property (retain, nonatomic) NSMutableArray *dataItems;
@property (nonatomic) double pickItemTextLineHeight;
@property (weak, nonatomic) id<MMCommonPickerDelegate> pickDelegate;
@property (readonly, nonatomic) id selectedData;
@property (readonly, nonatomic) NSArray *selectedRows;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initDataSrc;
- (void)didAddSubview:(id)a0;
- (void)setData:(id)a0;
- (void)setData:(id)a0 inComponent:(long long)a1;
- (void)setSelected:(id)a0;
- (void)setSelected:(id)a0 inComponent:(long long)a1;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 animated:(BOOL)a2;
- (BOOL)isScrolling;
- (BOOL)isScrolling:(id)a0;
- (unsigned long long)componentCount;
- (id)componentListAtIndex:(unsigned long long)a0;
- (id)pickerItemForComponent:(long long)a0 AndRow:(long long)a1;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)titleForRow:(long long)a0 forComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)updateLabel:(id)a0 ForComponent:(long long)a1 AndRow:(long long)a2;
- (void)updateLabelOnComponentCountOne:(id)a0 ForComponent:(long long)a1;
- (void)updateLabelOnComponentCountTwo:(id)a0 ForComponent:(long long)a1;
- (void)updateLabelOnComponentCountOverThree:(id)a0 ForComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)onPickerViewDidSelectRow:(long long)a0 inComponent:(long long)a1 PickItem:(id)a2;
- (void).cxx_destruct;

@end
