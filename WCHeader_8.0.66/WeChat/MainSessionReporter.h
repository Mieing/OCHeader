@class NSString, NSMutableDictionary, NSIndexPath;

@interface MainSessionReporter : MMUserService <IMMNewSessionMgrExt, BaseMsgViewControllerExt, INetworkStatusMgrExt, MMServiceProtocol>

@property (nonatomic) BOOL enableExitReport;
@property (nonatomic) BOOL enableEntryReport;
@property (nonatomic) BOOL enableReportDetail;
@property (nonatomic) long long readSessionCount;
@property (nonatomic) unsigned long long enterForegoundTime;
@property (nonatomic) unsigned long long enterBackgroundTime;
@property (nonatomic) long long enterForegroundUnreadCount;
@property (retain, nonatomic) NSMutableDictionary *reportItems;
@property (nonatomic) long long chatBoxMinIndex;
@property (retain, nonatomic) NSIndexPath *maxEntrySessionIndexPath;
@property (nonatomic) BOOL shouldReportEntryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)chatTypeForSession:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)recordEnterSessionIndex:(id)a0;
- (void)updateChatBoxEntryMinIndex:(long long)a0;
- (void)reportSessionsAt:(long long)a0;
- (long long)maxEntrySessionIndex;
- (void)handleEnterSessionAndClearUnread:(id)a0;
- (void)onSessionUnreadCountChanged:(id)a0 prevUnreadCount:(long long)a1;
- (void)onNewMsgArriving:(id)a0 NotifyFlag:(long long)a1;
- (void)onWillDeleteSession:(id)a0;
- (void)onEnterBaseMsgSession:(id)a0;
- (void)onAppDidEnterBackground:(id)a0;
- (void)onAppEnterForeground:(id)a0;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)reset;
- (id)itemForSession:(id)a0;
- (id)itemKeyForSession:(id)a0;
- (void).cxx_destruct;

@end
