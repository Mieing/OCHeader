@class NSString;
@protocol IWACameraScanViewControllerHelper, IWAWAGetA8KeyLogicHelper;

@interface WAJSEventHandler_scanCode : WAJSEventHandler_BaseEvent <WAWAGetA8KeyLogicHelperDelegate, WACameraScanViewControllerHelperDelegate>

@property (retain, nonatomic) id<IWACameraScanViewControllerHelper> viewControllerHelper;
@property (retain, nonatomic) id<IWAWAGetA8KeyLogicHelper> getA8KeyHelper;
@property (retain, nonatomic) NSString *charSet;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *scanResult;
@property (retain, nonatomic) NSString *rawDataInBase64;
@property (nonatomic) long long codeVersion;
@property (retain, nonatomic) NSString *pagePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)showScanCodeVC:(long long)a0 params:(id)a1;
- (void)onScanCodeResult:(id)a0;
- (void)onWeappGetA8Key:(id)a0;
- (id)resultParamsWithDic:(id)a0;
- (void)onCameraScanViewControllerDidBePoped;
- (void).cxx_destruct;

@end
