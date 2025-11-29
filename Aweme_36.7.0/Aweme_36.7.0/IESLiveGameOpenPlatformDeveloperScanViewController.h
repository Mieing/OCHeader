@class UIButton, NSString, IESLiveGameOpenPlatformDeveloperScanView, UILabel, IESLiveGameOpenPlatformDeveloperScanManager;

@interface IESLiveGameOpenPlatformDeveloperScanViewController : UIViewController <IESLiveGameOpenPlatformDeveloperScanManagerDelegate>

@property (retain, nonatomic) IESLiveGameOpenPlatformDeveloperScanManager *scanManager;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) IESLiveGameOpenPlatformDeveloperScanView *scanView;
@property (retain, nonatomic) UILabel *tipLable;
@property (copy, nonatomic) id /* block */ handleScanResultCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)QRCodeScanManager:(id)a0 didOutputMetadataObjects:(id)a1;
- (void)pr_backAction;
- (id)pr_availableCaptureSessionPresetForDevice;
- (void)removeScanningView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setup;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dismissViewControllerWithCompletion:(id /* block */)a0;

@end
