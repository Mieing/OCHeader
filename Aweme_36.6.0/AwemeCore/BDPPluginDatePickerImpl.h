@class NSString, BDPDatePickerView;

@interface BDPPluginDatePickerImpl : NSObject <BDPDatePickerPluginDelegate, BDPDatePickerViewDelegate>

@property (copy, nonatomic) id /* block */ datePickerCompletion;
@property (retain, nonatomic) BDPDatePickerView *pickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)bdp_showDatePickerViewWithModel:(id)a0 completion:(id /* block */)a1;
- (void)didCancelDatePicker:(id)a0;
- (void)datePicker:(id)a0 didSelectedDate:(id)a1;
- (void)bdp_updateDatePickerViewWithModel:(id)a0 animated:(BOOL)a1;
- (void)bdp_dismissDatePickerViewAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
