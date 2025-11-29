@class NSString, EmoticonStoreItem;

@interface MMEmoticonStoreBaseDownloadLogic : NSObject <IEmoticonPackageStateMgrExt, IEmoticonPackageMgrExt, EmoticonStoreItemExt, MMEmoticonStoreDownloadObserver, MMEmoticonStoreDownloadUIHelper>

@property (retain, nonatomic) EmoticonStoreItem *storeItem;
@property (nonatomic) BOOL isReleaseBuild;
@property (nonatomic) int downloadStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateStoreItem:(id)a0;
- (void)onDownloadStatusChangeTo:(int)a0;
- (void)onDownloadProgress:(float)a0;
- (void)realDoBuyItem;
- (void)onState:(long long)a0;
- (void)checkEmoticonBuyRet:(unsigned long long)a0;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)a0 IsDownloaded:(BOOL)a1;
- (void)OnEmoticonStoreItemChanged:(id)a0;
- (void)OnUpdateEmoticonPackageState:(id)a0 toState:(long long)a1;
- (void)OnDownloadProgressChanged:(id)a0 CurrLength:(unsigned long long)a1 TotalLength:(unsigned long long)a2;
- (void)OnBuyItemFirstBuyTipShow:(id)a0;
- (void)OnBuyItemPrepareStarted:(id)a0;
- (void)OnBuyItemPrepareFinished:(id)a0;
- (void)OnBuyItemStarted:(id)a0;
- (void)OnBuyItemSuccess:(id)a0 paidBefore:(BOOL)a1;
- (void)OnBuyItemFailed:(id)a0;
- (void)OnBuyItemCancel:(id)a0;
- (id)curViewController;
- (void)startLoading;
- (void)stopLoading;
- (void)stopLoadingOKWithWoring:(id)a0;
- (void)stopLoadingIfNeededForPid:(id)a0;
- (void)stopLoadingOKIfNeededForPid:(id)a0 withWording:(id)a1;
- (void)showAlertWith:(id)a0;
- (void).cxx_destruct;

@end
