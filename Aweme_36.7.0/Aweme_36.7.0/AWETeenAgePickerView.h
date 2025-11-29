@class NSString, UIPickerView, NSMutableArray;
@protocol AWETeenAgePickerViewDelegate;

@interface AWETeenAgePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>

@property (retain, nonatomic) UIPickerView *agePickerView;
@property (nonatomic) BOOL hasSelected;
@property (nonatomic) long long colorMode;
@property (retain, nonatomic) NSMutableArray *ageItemArray;
@property (nonatomic) long long age;
@property (retain, nonatomic) NSString *ageDesc;
@property (nonatomic) long long defaultLandingIndex;
@property (weak, nonatomic) id<AWETeenAgePickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBirthday:(id)a0 age:(long long)a1 colorMode:(long long)a2;
- (void)updateAgeDataItemsWithAge:(long long)a0;
- (void)p_setupDefaultPicker;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;

@end
