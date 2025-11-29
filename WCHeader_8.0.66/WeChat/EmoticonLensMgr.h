@class EmoticonLensLocalData, NSString, EmoticonLensIconDownloader, EmoticonLensListCgi, EmoticonLensInfoBatchCgi;

@interface EmoticonLensMgr : MMUserService <EmoticonLensListCgiDelegate, EmoticonLensInfoBatchCgiDelegate, EmoticonLensIconDownloaderDelegate, ICdnComMgrExt, MMServiceProtocol>

@property (retain, nonatomic) EmoticonLensLocalData *localData;
@property (retain, nonatomic) EmoticonLensListCgi *lensListCgi;
@property (retain, nonatomic) EmoticonLensInfoBatchCgi *requestLensInfoCgi;
@property (retain, nonatomic) EmoticonLensIconDownloader *iconDownloader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getLocalLensList;
- (id)getRecentUsedList;
- (void)addToRecentUse:(id)a0;
- (id)getIconForLens:(id)a0;
- (void)setRecommendData:(id)a0;
- (void)requestLensList;
- (BOOL)canLoadMore;
- (void)requestLensListNextPage;
- (void)requestLensInfoWithId:(id)a0;
- (void)downloadLensIcon:(id)a0;
- (void)tryUpdateHistoryRecords;
- (void)downloadLensPackage:(id)a0;
- (id)getLensPackageFor:(id)a0;
- (void)loadLocalData;
- (void)saveToLocal;
- (void)OnCdnDownload:(id)a0;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)onRequestLensListSuccessWithLens:(id)a0 isFirstPage:(BOOL)a1;
- (void)onRequestLensListFail;
- (void)onEmoticonLensInfoSuccess:(id)a0 forLensId:(id)a1 finish:(BOOL)a2;
- (void)onEmoticonLensInfoInvalid:(id)a0 errType:(long long)a1;
- (void)onEmoticonLensInfoFail:(id)a0;
- (void)onIconDownloaderSuccess:(id)a0 filePath:(id)a1;
- (void)onIconDownloaderFail:(id)a0;
- (id)packagePathForLensId:(id)a0;
- (id)packageZipPathForLensId:(id)a0;
- (id)lensIconPathForLens:(id)a0;
- (id)configDataFilePath;
- (id)emoticonInfoForLens:(id)a0;
- (void)clearLensResource:(id)a0;
- (void).cxx_destruct;

@end
