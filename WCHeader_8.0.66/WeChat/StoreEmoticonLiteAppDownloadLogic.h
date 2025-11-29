@class EmoticonStoreReportInfo, MMUIViewController;
@protocol StoreEmoticonLiteAppDownloadLogicDelegate;

@interface StoreEmoticonLiteAppDownloadLogic : MMEmoticonStoreBaseDownloadLogic

@property (nonatomic) int scene;
@property (nonatomic) int downloadType;
@property (retain, nonatomic) EmoticonStoreReportInfo *reportInfo;
@property (weak, nonatomic) MMUIViewController *callingVC;
@property (weak, nonatomic) id<StoreEmoticonLiteAppDownloadLogicDelegate> delegate;

- (BOOL)doOperation:(long long)a0;
- (void)onDownloadStatusChangeTo:(int)a0;
- (void)onDownloadProgress:(float)a0;
- (BOOL)tryDownload;
- (void)tryCancelDownload;
- (void)tryUninstall;
- (void)onTapDownloadActivity;
- (void)onAlertViewQuitDownloadBtnClick;
- (id)curViewController;
- (int)getLiteAppStatusForStatus:(int)a0;
- (void).cxx_destruct;

@end
