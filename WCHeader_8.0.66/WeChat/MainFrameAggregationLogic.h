@class NSSet, NSString, NSMutableSet, NSMutableArray;
@protocol MainFrameAggregationLogicDelegate;

@interface MainFrameAggregationLogic : NSObject <IMainSessionMgrExt, IMMNewSessionMgrExt>

@property (retain, nonatomic) NSMutableArray *sessionList;
@property (retain, nonatomic) NSMutableArray *reloadingList;
@property (retain, nonatomic) NSMutableSet *sessionSet;
@property (retain, nonatomic) NSSet *initalSessionSet;
@property (weak, nonatomic) id<MainFrameAggregationLogicDelegate> delegate;
@property (nonatomic) unsigned long long enterPageTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)cellDataAtIndex:(long long)a0;
- (id)cellDataForUsername:(id)a0;
- (id)sessionAtIndex:(long long)a0;
- (id)currentSessionList;
- (BOOL)isSessionInInitalList:(id)a0;
- (long long)sessionCount;
- (long long)notifySessionCount;
- (id)genReportSessionListDetail;
- (void)rebuildSessionList;
- (void)changeReadStatusAtIndex:(long long)a0;
- (BOOL)canShowSession:(id)a0;
- (void)onMainFrameBeginReload;
- (void)onMainFrameHandleSession:(id)a0;
- (void)onMainFrameEndReload;
- (void)onSessionTotalUnreadCountChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
