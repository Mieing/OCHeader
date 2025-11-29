@class MemoryMappedKV, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WCForeBackFlowMgr : MMObject <WCAccountSwitchProtocol> {
    NSObject<OS_dispatch_queue> *queue;
    unsigned int pid;
    NSString *curPage;
    unsigned long long curPageHash;
    MemoryMappedKV *mapKv;
    unsigned long long lastEnterForegroundTime;
    unsigned long long lastEnterBackgroundTime;
    unsigned int applicaitonSwitchSeq;
    unsigned int appSwitchMergeSeq;
    unsigned int reportSeq;
    NSMutableArray *appSwitchMergeRecords;
    NSMutableArray *appStatMergeRecords;
    NSString *enterForegroundUnreadMsg;
    NSMutableArray *unreadMergeRecords;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onInit;
- (void)onClearData;
- (void)loadAppStatData;
- (id)loadAppSwitchRptRecords:(id)a0;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (void)onAppearPage:(id)a0 withVC:(id)a1 withHashCode:(unsigned long long)a2;
- (void)handleWeixinStatus:(BOOL)a0 withReport:(BOOL)a1;
- (void)reportWeixinTime;
- (id)createRptByJsonArray:(id)a0;
- (void)saveAppSwitchMergeRecords:(id)a0 withKey:(id)a1;
- (void)calcSessionUnread:(id)a0;
- (id)getCalcSessionType:(id)a0;
- (void).cxx_destruct;

@end
