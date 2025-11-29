@class OrderedDictionary, NSString;

@interface MainFrameFoldReporter : NSObject <INewSyncExt, MMUIViewControllerExt>

@property (retain, nonatomic) OrderedDictionary *exposeInfos;
@property (nonatomic) unsigned long long enterForegroundTime;
@property (nonatomic) unsigned long long prevEnterChatTime;
@property (nonatomic) BOOL shouldReportExposeDetail;
@property (nonatomic) unsigned long long currMainTabTime;
@property (nonatomic) unsigned long long jumpUnreadSessionTime;
@property (nonatomic) unsigned long long enterUnreadAggregationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkReportSessionInfoWithOneScreenCount:(long long)a0 foldRate:(double)a1;

- (id)init;
- (void)dealloc;
- (void)reportClickSession:(id)a0 status:(long long)a1 index:(long long)a2;
- (void)reportClickSession:(id)a0 status:(long long)a1 index:(long long)a2 inUnreadGroup:(BOOL)a3;
- (void)reportFoldStatusChange:(BOOL)a0 topSessionCount:(long long)a1;
- (void)reportNewSyncClearUnread:(id)a0 unreadCount:(long long)a1;
- (void)handleExposeSession:(id)a0;
- (void)onNewSyncEnterSession:(id)a0 createTime:(unsigned int)a1;
- (void)onNewSyncClearUnread:(id)a0;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (void)onAppEnterForeground:(id)a0;
- (void).cxx_destruct;

@end
