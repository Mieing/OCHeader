@class WCPayF2FAnnouncementCgi, NSString, WCPayF2FDeleteRecordCgi, WCPayGetF2FReceiveDetailDataCgi, WCPayF2FReceiveHistoryResponse, WCPayF2FGetReceiveHistoryCgi;

@interface WCPayF2FReceiveDetailControlLogic : WCPayControlLogic <WCPayF2FReceiveDetailViewControllerDelegate, WCPayGetF2FReceiveDetailDataCgiDelegate, WCPayF2FDeleteRecordCgiDelegate, WCPayF2FReceiveHistoryViewControllerDelegate, WCPayF2FGetReceiveHistoryCgiDelegate, PBMessageObserverDelegate, IOplogExt, WCPayF2FAnnouncementCgiDelegate>

@property (nonatomic) BOOL bIsBackFromRootDetailViewController;
@property (nonatomic) unsigned long long detailFromScene;
@property (nonatomic) unsigned long long jsApiFromTimeStamp;
@property (retain, nonatomic) WCPayGetF2FReceiveDetailDataCgi *getReceiveDetailCgi;
@property (retain, nonatomic) WCPayF2FDeleteRecordCgi *deleteRecordCgi;
@property (retain, nonatomic) WCPayF2FGetReceiveHistoryCgi *getReceiveHistoryCgi;
@property (retain, nonatomic) WCPayF2FReceiveHistoryResponse *curHistoryResp;
@property (nonatomic) unsigned long long lastHistoryReqTimeFormat;
@property (nonatomic) unsigned long long lastHistoryPreviousTimestamp;
@property (nonatomic) unsigned long long lastHistoryNewerTimestamp;
@property (nonatomic) BOOL bNeedUpdateHistoryList;
@property (retain, nonatomic) WCPayF2FAnnouncementCgi *getAnnouncementCgi;
@property (nonatomic) BOOL m_isSoundOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithData:(id)a0;
- (id)initWithTimeStamp:(unsigned long long)a0;
- (void)stopLogic;
- (void)startLogic;
- (void)getF2FAnnouncement;
- (void)onWCPayF2FGetAnnouncement:(id)a0;
- (unsigned long long)getCurrentDetailFromScene;
- (void)f2fReceiveDetailViewControllerBack;
- (void)f2fReceiveDetailViewControllerClickHistoryBtn;
- (void)f2fReceiveDetailViewControllerDidSelectRecord:(id)a0;
- (void)f2fReceiveDetailViewControllerLoadMoreRecordWithLastRecord:(id)a0 timeFormat:(unsigned long long)a1;
- (void)f2fReceiveDetailViewControllerDeleteRecord:(id)a0 timeFormat:(unsigned long long)a1;
- (void)f2fReceiveHistoryViewControllerBack;
- (void)f2fReceiveHistoryViewControllerClickItemWithTimeStamp:(unsigned long long)a0 timeFormat:(unsigned long long)a1;
- (void)f2fReceiveHistoryViewControllerDidSelectTimeStamp:(unsigned long long)a0 timeFormat:(unsigned long long)a1;
- (void)f2fReceiveHistoryViewControllerLoadMorePreviousItem:(unsigned long long)a0 timeFormat:(unsigned long long)a1;
- (void)f2fReceiveHistoryViewControllerLoadMoreNewItem:(unsigned long long)a0 timeFormat:(unsigned long long)a1;
- (void)getTodayReceiveDetailData;
- (void)getReceiveHistoryData;
- (void)sendReceiveHistoryRequestWithTimeStamp:(unsigned long long)a0 timeFormat:(unsigned long long)a1 chooseFlag:(unsigned long long)a2 loadmoreDirection:(unsigned long long)a3;
- (void)onGetWCF2FReceiveDetailDataCgiResp:(id)a0;
- (void)onGetWCPayF2FDeleteRecordCgiResp:(id)a0;
- (void)onGetF2FReceiveHistoryCgiResponse:(id)a0;
- (void)WCPayFacingReceiveSettingSoundSwicthState:(BOOL)a0;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void)handleSyncOplogFail;
- (void)handleSyncOplogSuccess;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
