@class NSString, MMPageSheetAdapter, NSMutableArray, UIPickerView;
@protocol MMWebViewPluginShowMultiPickerDelegate;

@interface WSWebViewPlugin_ShowMultiPicker : WSWebViewPluginBase <UIPickerViewDataSource, UIPickerViewDelegate, MMPageSheetAdapterDelegate, MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) NSMutableArray *arrPickerData;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (nonatomic) unsigned long long pickerMode;
@property (weak, nonatomic) id<MMWebViewPluginShowMultiPickerDelegate> resultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showMultiPickerWithDataArray:(id)a0 selectedIndexArray:(id)a1 andHeaderText:(id)a2 inMode:(unsigned long long)a3;
- (id)updateMultiPickerViewOfColumn:(unsigned long long)a0 newValueArray:(id)a1 andCurrent:(unsigned long long)a2;
- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)colorForPageSheetCancelButtonTitle;
- (void)showPickerEndAndClearData;
- (void)showPickerViewCanceldWithReaseon:(id)a0;
- (void)showPickerViewSuccessAndCallback;
- (BOOL)checkParamsValid:(id)a0 withErrorMsg:(id *)a1;
- (long long)searchMembersInArray:(id)a0 isNotKindOfClass:(Class)a1;
- (long long)searchMembersInArrayWhichIsInvalid:(id)a0;
- (BOOL)isValueToShowInPickerValid:(id)a0;
- (void).cxx_destruct;

@end
