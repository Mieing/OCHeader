@class WXGRoamBackendHandler, NSArray, NSString, UIScrollView, UILabel;

@interface WXGRoamPanelViewController : MMUIViewController <WXGRoamBackendHandlerDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *showInfoLabel;
@property (retain, nonatomic) WXGRoamBackendHandler *backendHandler;
@property (retain, nonatomic) NSArray *backupPackages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPressLeftNavigationButton;
- (void)onPressRightNavigationButton;
- (void)viewDidLoad;
- (void)setupScrollView;
- (void)cleanPortable;
- (void)setBackupPackage;
- (void)changeBackupPackage;
- (void)deleteBackupPackage;
- (void)getBackupPackages;
- (void)onRoamBackendGetRoamBackupPackagesSetResponse:(id)a0 success:(BOOL)a1 invokeID:(unsigned long long)a2;
- (void)onRoamBackendGetRoamBackupPackagesGetResponse:(id)a0 success:(BOOL)a1 invokeID:(unsigned long long)a2;
- (void)enterRDMDeviceList;
- (void)cleanCache;
- (void).cxx_destruct;

@end
