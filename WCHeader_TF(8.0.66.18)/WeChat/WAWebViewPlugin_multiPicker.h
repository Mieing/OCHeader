@class NSString, WABasePickerView;
@protocol WAWebViewPluginPickerDelegate;

@interface WAWebViewPlugin_multiPicker : WAWebViewPluginBase <WAPickerViewDelegate, WADateTimePickerDelegate> {
    WABasePickerView *_pickerView;
}

@property (weak, nonatomic) id<WAWebViewPluginPickerDelegate> resultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (BOOL)isPickerViewVisible;
- (id)getPickerViewItems;
- (id)getPickerView;
- (void)showMultiPickerView:(id)a0 current:(id)a1 headerText:(id)a2;
- (void)updateMultiPickerView:(id)a0 current:(long long)a1 column:(long long)a2;
- (void)showSinglePickerView:(id)a0 current:(unsigned long long)a1 headerText:(id)a2;
- (void)showDateTimePickerView:(long long)a0 field:(id)a1 current:(id)a2 start:(id)a3 end:(id)a4 headerText:(id)a5;
- (void)pickerWillShow;
- (void)onCancel;
- (void)onConfirm:(id)a0 values:(id)a1;
- (void)onSelect:(long long)a0 row:(long long)a1;
- (void)onDateTimeConfirm:(id)a0;
- (double)getContentMaxHeight;
- (void).cxx_destruct;

@end
