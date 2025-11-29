@class NSArray, NSString, WCAddressHalfScreenPickerView;

@interface LocalJSEventHandler_showAddressPickerView : LocalJSEventHandler_BaseEvent <WCAddressHalfScreenDelegate>

@property (retain, nonatomic) WCAddressHalfScreenPickerView *pickerView;
@property (retain, nonatomic) NSArray *addressItems;
@property (retain, nonatomic) NSArray *current;
@property (nonatomic) int pickerMode;
@property (nonatomic) unsigned int state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)initAddressItems;
- (int)parseModeType:(id)a0;
- (void)configAddressPicker;
- (void)initPickerView;
- (void)onFailureCompletionWithText:(id)a0 andComponent:(int)a1;
- (void)onFinishMultiPickerWithProvince:(id)a0 andCity:(id)a1 andDistrict:(id)a2 andStreet:(id)a3 andPostCode:(id)a4;
- (void)chooseStageAtComponent:(int)a0 withProvince:(id)a1 andCity:(id)a2 andDistrict:(id)a3 andStreet:(id)a4;
- (void)multiPickerWillDisappear;
- (unsigned long long)eventAuthScene;
- (void)OnGetAllFourthAddressStageData:(id)a0 Error:(id)a1;
- (void).cxx_destruct;

@end
