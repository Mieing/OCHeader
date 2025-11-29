@class UIColor, NSArray, NSString, UIPickerView;
@protocol BDXPickerColumnViewDelegate;

@interface BDXPickerColumnView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>

@property (retain, nonatomic) NSArray *columnValue;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long index;
@property (nonatomic) double height;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) UIColor *fontColor;
@property (nonatomic) double fontWeight;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (weak, nonatomic) id<BDXPickerColumnViewDelegate> delegate;
@property (nonatomic) BOOL needUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)roundToPhysicalPixel:(double)a0;
- (void)reloadPickerFrame;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)init;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 attributedTitleForRow:(long long)a1 forComponent:(long long)a2;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)initData;

@end
