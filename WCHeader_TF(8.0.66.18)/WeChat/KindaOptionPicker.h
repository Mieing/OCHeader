@class NSString, WCBizPickerView, NSArray;

@interface KindaOptionPicker : NSObject <MMKOptionPicker, UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate> {
    WCBizPickerView *m_pickerView;
    NSArray *m_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showImpl:(id)a0 optionSelectCallback:(id)a1;
- (void)hide;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)a0;
- (void).cxx_destruct;

@end
