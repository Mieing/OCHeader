@class NSString, NSDate, NSMutableArray, UIButton;
@protocol MMScheduleDatePickerViewDelegate;

@interface MMScheduleDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, MMActionSheetCustomPickerPotocol>

@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) NSDate *preferredDate;
@property (retain, nonatomic) NSMutableArray *dayComponents;
@property (retain, nonatomic) NSMutableArray *hourComponents;
@property (retain, nonatomic) NSMutableArray *minuteComponents;
@property (retain, nonatomic) NSMutableArray *firstDayHourComponents;
@property (retain, nonatomic) NSMutableArray *firstHourMinuteComponents;
@property (retain, nonatomic) NSMutableArray *normalHourComponents;
@property (retain, nonatomic) NSMutableArray *normalMinuteComponents;
@property (retain, nonatomic) UIButton *datePreviewButton;
@property (nonatomic) BOOL datePreviewButtonTapped;
@property (weak, nonatomic) id<MMScheduleDatePickerViewDelegate> viewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreferredDate:(id)a0;
- (void)updatePreferredDate:(long long)a0;
- (void)didAddSubview:(id)a0;
- (void)initDataV2;
- (id)getDayStringAfterDay:(unsigned int)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)titleForRow:(long long)a0 forComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)OnDatePreviewButtonTapped:(id)a0;
- (void)uptatePreviewButtonText;
- (id)selectedDate;
- (BOOL)shouldDisplayDatePreviewButton;
- (void).cxx_destruct;

@end
