@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableSet, WebResourceCDNUploadHelper, NSMutableArray, WebResourceCDNDownloadHelper;

@interface WebviewResourceManager : MMUserService <IUdrResourceCallback, MMServiceProtocol, WebResourceCDNUploadHelperDelegate, WebResourceCDNDownloadHelperDelegate> {
    NSRecursiveLock *_lock;
    NSMutableArray *_resItemArray;
    WebResourceCDNUploadHelper *_cdnUploadHelper;
    WebResourceCDNDownloadHelper *_cdnDownloadHelper;
    NSMutableDictionary *_recordPMSDic;
}

@property (nonatomic) BOOL isEnableWebHostShow;
@property (nonatomic) unsigned int webHostRuleVersion;
@property (retain, nonatomic) NSMutableSet *weixinHostSet;
@property (retain, nonatomic) NSMutableDictionary *tencentHostDic;
@property (retain, nonatomic) NSMutableSet *weixinHostRegSet;
@property (retain, nonatomic) NSMutableDictionary *tencentHostRegDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getUserWebResourceRootDir;
- (BOOL)loadResItemArray;
- (void)saveResItemArray;
- (BOOL)loadRecordPermissionDic;
- (void)saveRecordPermissionDic;
- (id)getLocalResourceId;
- (id)getLocalResourceIdByPath:(id)a0;
- (id)getLocalPathByResourceId:(id)a0;
- (id)getLocalVideoPathByResourceId:(id)a0;
- (id)getLocalCustomFilePath:(id)a0 originPath:(id)a1;
- (void)stopAllNetworkTask;
- (void)addLocalImages:(id)a0;
- (void)addLocalImageResources:(id)a0;
- (id)addImage:(id)a0;
- (void)addLocalImagesWithOriginalSize:(id)a0;
- (void)addItemToResArray:(id)a0;
- (void)removeImageWithLocalId:(id)a0;
- (void)asyncNotifyResourceDownloadFinish:(id)a0;
- (BOOL)downloadImage:(id)a0 AppId:(id)a1;
- (void)addRecordResource:(id)a0;
- (BOOL)uploadVoice:(id)a0;
- (BOOL)downloadVoice:(id)a0 AppId:(id)a1;
- (BOOL)addVideoResource:(id)a0;
- (BOOL)addMiniGameVideoItemResourceByCopyFile:(id)a0;
- (BOOL)uploadVideo:(id)a0;
- (void)saveLocalImageFinished:(id)a0;
- (void)addCustomResItem:(id)a0;
- (BOOL)addCustomFileResource:(id)a0;
- (id)getResItemByLocalId:(id)a0;
- (BOOL)uploadLocalImage:(id)a0;
- (BOOL)uploadLocalResItem:(id)a0;
- (id)getWebHostRule:(id)a0;
- (id)matchWebHostRule:(id)a0;
- (void)onItemUploadCDNFinished:(int)a0 Item:(id)a1;
- (void)onItemUploadProgress:(int)a0 Item:(id)a1;
- (void)onItemUploadCDNFinishedWithoutMediaId:(int)a0 Item:(id)a1;
- (void)onItemUploadProgressWithoutMediaId:(int)a0 Item:(id)a1;
- (void)onItemCDNDownloadFinished:(int)a0 Item:(id)a1;
- (void)onItemDownloadProgress:(int)a0 Item:(id)a1;
- (void)onCallBackCheckSuccess:(id)a0 name:(id)a1 version:(int)a2 scene:(long long)a3;
- (void)onCallBackSuccess:(id)a0 name:(id)a1 version:(int)a2 scene:(long long)a3;
- (void)onCallBackFail:(id)a0 name:(id)a1 version:(int)a2 errNo:(int)a3 errCode:(int)a4 scene:(long long)a5;
- (void)updateWebHostRule;
- (id)calcHostReg:(id)a0;
- (void).cxx_destruct;

@end
