@class NSString, CameraScanViewController;
@protocol WACameraScanViewControllerHelperDelegate;

@interface WACameraScanViewControllerHelper : NSObject <CameraScanLogicDelegate, CameraScanUIDelegate, IWACameraScanViewControllerHelper>

@property (retain, nonatomic) CameraScanViewController *viewController;
@property (weak, nonatomic) id<WACameraScanViewControllerHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScanCodeParam:(id)a0;
- (id)initWithScanItemParam:(id)a0;
- (id)getCameraScanViewViewController;
- (BOOL)shouldObtainScanResult;
- (BOOL)shouldBackToSessionImmediately;
- (void)obtainScanResultDidFinish:(id)a0;
- (void)onScanCodeResult:(id)a0;
- (void)onScanItemResult:(id)a0;
- (void)onCameraScanViewControllerDidBePoped;
- (void).cxx_destruct;

@end
