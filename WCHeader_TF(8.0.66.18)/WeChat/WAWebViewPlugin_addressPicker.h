@class NSArray, NSDictionary, NSString, WCAddressHalfScreenPickerView;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_addressPicker : WAWebViewPluginBase <WCAddressHalfScreenDelegate>

@property (retain, nonatomic) WCAddressHalfScreenPickerView *pickerView;
@property (retain, nonatomic) NSArray *addressItems;
@property (retain, nonatomic) NSArray *current;
@property (retain, nonatomic) NSDictionary *result;
@property (retain, nonatomic) NSString *errString;
@property (nonatomic) int pickerMode;
@property (weak, nonatomic) id<IWAWebViewPluginDelegate> resultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initPickerView;
- (void)initAddressItems;
- (int)parseModeType:(id)a0;
- (void)showAddressPicker:(id)a0 mode:(id)a1;
- (void)configAddressPicker;
- (void)multiPickerWillDisappear;
- (void)onFailureCompletionWithText:(id)a0 andComponent:(int)a1;
- (void)onFinishMultiPickerWithProvince:(id)a0 andCity:(id)a1 andDistrict:(id)a2 andStreet:(id)a3 andPostCode:(id)a4;
- (void)chooseStageAtComponent:(int)a0 withProvince:(id)a1 andCity:(id)a2 andDistrict:(id)a3 andStreet:(id)a4;
- (void)OnGetAllFourthAddressStageData:(id)a0 Error:(id)a1;
- (void).cxx_destruct;

@end
