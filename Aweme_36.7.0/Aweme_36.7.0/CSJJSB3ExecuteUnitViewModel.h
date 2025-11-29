@class CSJAdInfoViewModel, WKWebView, CSJJSB3ExecuteUnitModel;

@interface CSJJSB3ExecuteUnitViewModel : NSObject

@property (retain, nonatomic) CSJJSB3ExecuteUnitModel *jsb3ExecuteUnitModel;
@property (weak, nonatomic) WKWebView *relateWebView;
@property (retain, nonatomic) CSJAdInfoViewModel *infoViewModel;

- (void)nativeCallJSWithParameters:(id)a0 inWebView:(id)a1;
- (void)jsInteractiveNativeWithTarget:(id)a0 inWebView:(id)a1;
- (id)relatedJSBWebViewWithModel:(id)a0;
- (id)unregisteredJSBDict;
- (id)buJSB3_copyToClipboardWithViewModel:(id)a0;
- (id)buJSB3_isAppInstalledWithViewModel:(id)a0;
- (id)buJSB3_appInfoWithViewModel:(id)a0;
- (id)buJSB3_configWithViewModel:(id)a0;
- (id)buJSB3_openWithViewModel:(id)a0;
- (id)buJSB3_openAppWithViewModel:(id)a0;
- (id)buJSB3_callNativePhoneWithViewModel:(id)a0;
- (id)buJSB3_get_addressWithViewModel:(id)a0;
- (id)buJSB3_device_shakeWithViewModel:(id)a0;
- (id)buJSB3_start_device_cameraWithViewModel:(id)a0;
- (id)buJSB3_close_device_cameraWithViewModel:(id)a0;
- (id)buJSB3_start_accelerometer_observerWithViewModel:(id)a0;
- (id)buJSB3_close_accelerometer_observerWithViewModel:(id)a0;
- (id)buJSB3_start_gyro_observerWithViewModel:(id)a0;
- (id)buJSB3_close_gyro_observerWithViewModel:(id)a0;
- (id)buJSB3_start_wobble_observerWithViewModel:(id)a0;
- (id)buJSB3_close_wobble_observerWithViewModel:(id)a0;
- (id)buJSB3_start_twist_observerWithViewModel:(id)a0;
- (id)buJSB3_close_twist_observerWithViewModel:(id)a0;
- (id)buJSB3_closeWithViewModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
