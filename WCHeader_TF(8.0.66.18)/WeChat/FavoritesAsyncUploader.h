@class NSString, NSMutableSet, FavoritesCDNInfo, NSMutableArray, MsgDataDownloadLogic;

@interface FavoritesAsyncUploader : FavoritesUploadBaseProccessor <MsgDataDownloadDelegate, CNetworkStatusExt, ICdnComMgrExt, PBMessageObserverDelegate> {
    NSMutableArray *m_needDownloadMsgList;
    NSMutableSet *m_downloadedMsg;
    unsigned long long m_currentState;
    FavoritesCDNInfo *m_uploadingInfo;
    MsgDataDownloadLogic *m_msgDataDownloadLogic;
    BOOL m_msgFileDownloadedFail;
    BOOL m_hasMsgToDownload;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)addItem:(id)a0 isPrior:(BOOL)a1;
- (void)removeItem:(id)a0;
- (void)resetUpload;
- (void)tryProccess;
- (void)run;
- (void)onAsyncUploadEndWithErrCode:(int)a0;
- (void)chectNeedDownloadMsgInFavitem:(id)a0;
- (void)downloadMsg;
- (void)onDownloadSuccess:(id)a0;
- (void)onDownloadExpireFail:(id)a0;
- (void)onDownloadCommonFail:(id)a0;
- (void)onDownloadCancel:(id)a0;
- (void)uploadFile;
- (void)uploadFavMedia:(id)a0;
- (void)reportSameUrlAndKeyWithDataList:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void)updateXml;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)HandleModifyFavItemResp:(id)a0 Event:(unsigned int)a1;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
