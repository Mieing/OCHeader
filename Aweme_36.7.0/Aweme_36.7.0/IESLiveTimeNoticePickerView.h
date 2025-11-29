@class NSArray, IESLiveTimeNoticeViewModel, NSString, UIPickerView;

@interface IESLiveTimeNoticePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>

@property (nonatomic) BOOL isPickerViewLinesHide;
@property (retain, nonatomic) UIPickerView *timePickerView;
@property (retain, nonatomic) NSArray *hours;
@property (retain, nonatomic) NSArray *minutes;
@property (weak, nonatomic) IESLiveTimeNoticeViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindWithViewModel:(id)a0;
- (void)setupDatas;
- (void)setupConstants;
- (void)remakeSeparateLine;
- (id)dateWithOffset:(unsigned long long)a0;
- (id)dateStringWithOffset:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
