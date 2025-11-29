@class NSString, NSMutableDictionary;

@interface EmoticonPackageStateMgr : MMUserService <MMServiceProtocol, EmoticonStoreMgrExt, EmoticonStoreItemExt, IEmoticonPackageMgrExt>

@property (retain, nonatomic) NSMutableDictionary *m_dicState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (unsigned long long)buyEmoticonItem:(id)a0;
- (void)downloadHardCodePackage:(id)a0;
- (void)downloadEmoticonItem:(id)a0 isAutomatic:(BOOL)a1;
- (void)cancelDownloadItem:(id)a0;
- (float)getDownloadProgress:(id)a0;
- (void)addOrReplaceItem:(id)a0 withState:(long long)a1;
- (long long)getStateByItem:(id)a0;
- (void)removeItem:(id)a0;
- (void)OnBuyEmoticonItemStarted:(id)a0;
- (void)OnBuyItemFirstBuyTipShow:(id)a0;
- (void)OnBuyItemPrepareStarted:(id)a0;
- (void)OnBuyEmoticonItemPrepareFinished:(id)a0;
- (void)OnBuyEmoticonItemSuccess:(id)a0 paidBefore:(BOOL)a1;
- (void)OnBuyEmoticonItemFailed:(id)a0;
- (void)OnBuyEmoticonItemCanceled:(id)a0;
- (void)OnEmoticonStoreItemChanged:(id)a0;
- (void)OnEmoticonStoreItemDownloadProgressChanged:(id)a0 CurrLength:(unsigned long long)a1 TotalLength:(unsigned long long)a2;
- (void)OnEmoticonStoreItemDownloadFinished:(id)a0;
- (void)OnEmoticonStoreItemDownloadFailed:(id)a0;
- (void)resetState:(id)a0;
- (void)OnEmoticonStoreItemGetProductFinished:(id)a0;
- (void)OnEmoticonStoreItemInstallStarted:(id)a0;
- (void)OnEmoticonStoreItemInstallFinished:(id)a0;
- (void)OnEmoticonStoreItemInstallFailed:(id)a0;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)a0 IsDownloaded:(BOOL)a1;
- (void).cxx_destruct;

@end
