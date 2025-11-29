@class NSString, WACommonPickerView, MMPickerMaskView;

@interface WAJSEventHandler_showPickerView : WAJSEventHandler_BaseEvent <WAWebViewPluginPickerDelegate> {
    WACommonPickerView *_picker;
    MMPickerMaskView *_mask;
    long long _current;
    double _pickerTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
