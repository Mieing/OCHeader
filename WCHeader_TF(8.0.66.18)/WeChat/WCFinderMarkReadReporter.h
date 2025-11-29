@class MMTimer, NSString, NSMutableSet, NSMutableArray;

@interface WCFinderMarkReadReporter : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *waitingReportPool;
@property (retain, nonatomic) MMTimer *reportTimer;
@property (retain, nonatomic) NSMutableArray *failedItems;
@property (retain, nonatomic) NSMutableArray *streamWaittingPool;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)resetServiceData;
- (id)mmkvMapID;
- (void)syncFailedItems;
- (void)syncWattingPoolItems;
- (void)syncStreamWaittingPoolItems;
- (BOOL)isFailedItem:(id)a0;
- (void)reportImmediately;
- (void)markReadTid:(id)a0 markReadScene:(unsigned long long)a1 commentScene:(int)a2;
- (void)markReadTid:(id)a0 markReadScene:(unsigned long long)a1 commentScene:(int)a2 duration:(long long)a3 index:(unsigned long long)a4;
- (void)markReadTid:(id)a0 markReadScene:(unsigned long long)a1 subScene:(unsigned long long)a2 commentScene:(int)a3;
- (void)markReadTid:(id)a0 markReadScene:(unsigned long long)a1 subScene:(unsigned long long)a2 commentScene:(int)a3 duration:(unsigned long long)a4 index:(unsigned long long)a5;
- (void)markReadTid:(id)a0 markReadScene:(unsigned long long)a1 subScene:(unsigned long long)a2 commentScene:(int)a3 duration:(unsigned long long)a4 index:(unsigned long long)a5 autoPlayTimeInMs:(unsigned long long)a6 autoPlayWithSound:(BOOL)a7 startExposeMs:(unsigned long long)a8 sessionExtraKey:(id)a9 actionType:(long long)a10 effectiveExposeTimeMs:(unsigned long long)a11 startEffectiveExposeTimeMs:(unsigned long long)a12 areaId:(unsigned long long)a13;
- (void)markStreamReadTid:(id)a0 markReadScene:(unsigned long long)a1 commentScene:(int)a2;
- (void)markStreamReadTid:(id)a0 markReadScene:(unsigned long long)a1 commentScene:(int)a2 duration:(long long)a3;
- (void)markStreamReadTid:(id)a0 markReadScene:(unsigned long long)a1 subScene:(unsigned long long)a2 commentScene:(int)a3;
- (void)markStreamReadTid:(id)a0 markReadScene:(unsigned long long)a1 subScene:(unsigned long long)a2 commentScene:(int)a3 duration:(long long)a4;
- (void)markStreamReadTid:(id)a0 markReadScene:(unsigned long long)a1 subScene:(unsigned long long)a2 commentScene:(int)a3 duration:(long long)a4 autoPlayTimeInMs:(unsigned long long)a5 autoPlayWithSound:(BOOL)a6 startExposeMs:(unsigned long long)a7 sessionExtraKey:(id)a8 effectiveExposeTimeMs:(unsigned long long)a9 startEffectiveExposeTimeMs:(unsigned long long)a10;
- (id)getStreamReadStats;
- (void)clearStreamStats:(id)a0;
- (void)processStreamMarkSessionHistory;
- (void)clearSteramMarkReadSessionHistory;
- (void)startStatsReport;
- (void)reportAll;
- (void)reportGroupItem:(id)a0;
- (void)reportStatsPoolArrayWithDelayTime:(double)a0;
- (void)wattingPoolItemReportSuccess:(id)a0;
- (BOOL)isFailedItem:(id)a0 atScene:(unsigned long long)a1;
- (void)appendItemsAtFailed:(id)a0;
- (void)startReportFiledItem;
- (void)reportFailedGroupItem:(id)a0;
- (void)failedItemSyncRetrySuccess:(id)a0;
- (BOOL)isFlowCommentScene:(int)a0;
- (void).cxx_destruct;

@end
