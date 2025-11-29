@class NSArray, NSString, NSNumber, UIPickerView;

@interface HTSLiveInviterPKSelectTimeViewController : IESLiveRevenueInteractPopupViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (retain, nonatomic) UIPickerView *picker;
@property (retain, nonatomic) NSNumber *selectedTime;
@property (retain, nonatomic) NSArray *defaultDurations;
@property (copy, nonatomic) NSString *defaultDuration;
@property (copy, nonatomic) NSString *requestSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onSetupNavBar:(id)a0;
- (void)recordSettingTime;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)setupViews;

@end
