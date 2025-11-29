@class WCNewClickStatRecordPageItem, NSString, WCNewClickStatItem, WCNewClickStatReportConfig, MemoryMappedKV, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WCNewClickStatMgr : MMUserService <MMKernelExt, MMServiceProtocol> {
    WCNewClickStatItem *_reportItem;
    WCNewClickStatRecordPageItem *curPage;
    NSObject<OS_dispatch_queue> *queue;
    WCNewClickStatReportConfig *_reportConfig;
    unsigned int _eventID;
    unsigned int applicaitonSwitchSeq;
    unsigned int pid;
    unsigned int reportSeq;
    MemoryMappedKV *mapKv;
    NSMutableArray *appSwitchMergeRecords;
    unsigned int appSwitchMergeSeq;
    NSMutableArray *appStatMergeRecords;
    unsigned long long lastEnterForegroundTime;
    unsigned long long lastEnterBackgroundTime;
    NSString *enterForegroundUnreadMsg;
    NSMutableArray *unreadMergeRecords;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onWillSuspend;
- (void)dealloc;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)pageAppear:(id)a0;
- (void)pageDisappear:(id)a0;
- (void)saveWidgetRecordForRecordPage:(id)a0;
- (id)getAppNormalAttr:(id)a0;
- (id)getPageNormalAttr:(id)a0 withEventConfig:(id)a1;
- (id)getWidgetNormalAttrOnPage:(id)a0 andTimeStamp:(unsigned int)a1;
- (void)reconstructOneReportItem:(unsigned int)a0;
- (void)reportAndSaveData;
- (void)checkSeq:(id)a0;
- (BOOL)isNeedToReport:(id)a0;
- (void)loadReportConfig;
- (void)saveCurrentReportData:(id)a0;
- (void)saveRealLastSwitchBackTime;
- (BOOL)isNeedFilter:(id)a0;
- (BOOL)isNeedPageAction:(id)a0 pageActionConfig:(id)a1;
- (BOOL)isNeedCalWidgetStatData:(id)a0;
- (void)removeWidgetRecordByPageList:(id)a0;
- (void)notifyPageAppear:(id)a0;
- (void)saveSnapshot:(id)a0;
- (void)recordOrReportAppSwitch:(id)a0 Type:(BOOL)a1;
- (void)handleWeixinStatus:(BOOL)a0;
- (void)saveAppSwitchMergeRecords:(id)a0 andkey:(id)a1;
- (id)loadAppSwitchRptRecords:(id)a0;
- (void)saveAppStatTime;
- (void)loadAppStatData;
- (void)onRealTimeKVReportSucceedWithWrap:(id)a0;
- (void)onRealTimeKVReportFailedWithWrap:(id)a0;
- (void)reportWeixinTime;
- (id)createRptByJsonArray:(id)a0;
- (void)calcSessionUnread:(id)a0;
- (void).cxx_destruct;

@end
