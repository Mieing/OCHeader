@class NSString;
@protocol IWACameraScanViewControllerHelper;

@interface WAJSEventHandler_scanItem : WAJSEventHandler_BaseEvent <WACameraScanViewControllerHelperDelegate>

@property (retain, nonatomic) id<IWACameraScanViewControllerHelper> viewControllerHelper;
@property (retain, nonatomic) NSString *scanResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)showScanItemWithParams:(id)a0;
- (void)onScanItemResult:(id)a0;
- (void)onCameraScanViewControllerDidBePoped;
- (void).cxx_destruct;

@end
