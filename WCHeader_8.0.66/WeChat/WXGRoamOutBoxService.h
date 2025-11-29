@class MMLoadingView, NSString, NSURL, UIView;

@interface WXGRoamOutBoxService : MMUserService <UIDocumentPickerDelegate, UIDocumentBrowserViewControllerDelegate, MMServiceProtocol>

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIView *tipsPanView;
@property (retain, nonatomic) UIView *documentView;
@property (copy) NSString *checkRelativePath;
@property (retain, nonatomic) MMLoadingView *loadingView;
@property (retain, nonatomic) NSURL *autoTestUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showDocumentPickerViewControllerCheckPermissionWith:(id)a0 path:(id)a1;
- (void)showDocumentPickerViewControllerWith:(id)a0;
- (id)buildAttributedStringWithFont:(id)a0 prefix:(id)a1 iconName:(id)a2 subfix:(id)a3;
- (void)addTipsViewSecond;
- (void)handlePanGesture:(id)a0;
- (void)onTapTips;
- (void)writeDataToURL;
- (void)startLoadingView;
- (void)stopLoadingAndHide;
- (void)checkPermissionWith:(id)a0;
- (void)createBackupMenuWith:(id)a0;
- (BOOL)isiCloudDirURL:(id)a0;
- (BOOL)isSMBDirURL:(id)a0;
- (BOOL)isCloudStorageDirURL:(id)a0;
- (unsigned long long)checkStorageType:(id)a0;
- (unsigned int)deviceCountOf:(unsigned long long)a0;
- (id)getRelativeURLWithAbsoluteUrl:(id)a0;
- (id)checkDeviceIdWhenInit:(id)a0;
- (BOOL)checkDeviceIdExist:(id)a0;
- (id)checkIsDeviceIdExistValid:(id)a0;
- (id)genNewOutBoxDeviceIdFile:(id)a0;
- (id)genConcatenatedDataWith:(id)a0;
- (void)saveBookmarkWith:(id)a0 url:(id)a1 isiCloud:(BOOL)a2;
- (id)getBookmarkWith:(id)a0;
- (id)getURLStringWith:(id)a0;
- (void)changeRemarkWith:(id)a0 remark:(id)a1;
- (id)getRemarkWith:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (void)documentBrowser:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)deletePortableDevice:(id)a0;
- (void).cxx_destruct;

@end
