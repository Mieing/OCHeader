@class AWEThemeChooseTimeModel, NSArray, NSString, UILabel, UIPickerView, UIView;
@protocol AWEThemeChooseTimePickerViewDeleagte;

@interface AWEThemeChooseTimePickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UILabel *leftTimeLable;
@property (retain, nonatomic) UILabel *rightTimeLable;
@property (retain, nonatomic) UIPickerView *leftPickerView;
@property (retain, nonatomic) UIPickerView *rightPickerView;
@property (retain, nonatomic) NSArray *hoursArr;
@property (retain, nonatomic) NSArray *minArr;
@property (retain, nonatomic) AWEThemeChooseTimeModel *selectTimeModel;
@property (weak, nonatomic) id<AWEThemeChooseTimePickerViewDeleagte> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTimeWithModel:(id)a0;
- (void)setUpTop;
- (void)setUpBottom;
- (id)getCommonLable:(double)a0;
- (id)getCommonPickerView;
- (void)addLine;
- (id)getCommonLineView;
- (void)clearSeparatorWithPickerView:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;

@end
