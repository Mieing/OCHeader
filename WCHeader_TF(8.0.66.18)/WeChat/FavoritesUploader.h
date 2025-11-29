@class NSString, NSMutableSet, FavoritesCDNInfo, NSMutableArray, MsgDataDownloadLogic;

@interface FavoritesUploader : FavoritesUploadBaseProccessor <MsgDataDownloadDelegate, PBMessageObserverDelegate, ICdnComMgrExt, CNetworkStatusExt> {
    NSMutableArray *m_chectCdnDatalist;
    NSMutableArray *m_chectCdnItemlist;
    NSMutableArray *m_needDownloadMsgList;
    NSMutableSet *m_downloadedMsg;
    unsigned long long m_currentState;
    FavoritesCDNInfo *m_uploadingInfo;
    MsgDataDownloadLogic *m_msgDataDownloadLogic;
    BOOL m_msgFileDownloadedFail;
    BOOL m_hasMsgToDownload;
    BOOL m_needUpdateTag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)addItem:(id)a0 isPrior:(BOOL)a1;
- (void)removeItem:(id)a0;
- (void)updateTagForItem:(id)a0;
- (void)resetUpload;
- (void)tryProccess;
- (void)run;
- (void)onUploadEndWithErrCode:(int)a0;
- (void)onUploadEndWithErrCode:(int)a0 NeedRecreateCdnInfo:(BOOL)a1;
- (void)buildChectCdnList;
- (void)sendChectCDN;
- (void)HandleCheckCDNResp:(id)a0 Event:(unsigned int)a1;
- (void)updateCDNInfoByExistFavCDNItem:(id)a0;
- (BOOL)updateCDNInfoByUnExistFavCDNItem:(id)a0;
- (void)updateCDNInfoByUnExistButServerAsyncUploadFavCDNItem:(id)a0;
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
- (void)updateExcerptItem:(id)a0 inItem:(id)a1;
- (void)uploadXml;
- (unsigned int)sendModFavItemRequest:(id)a0;
- (void)checkBeforeUploadXml:(id)a0;
- (void)checkReportNoteUploadNetRespErrMsg:(id)a0 NetRetCode:(int)a1;
- (void)HandleAddFavItemResp:(id)a0 Event:(unsigned int)a1;
- (void)HandleModifyFavItemResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
