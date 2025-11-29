@interface BDPLineUpService : NSObject

+ (BOOL)isIssueModelValid:(id)a0 errorCallback:(id /* block */)a1;
+ (id)checkIfNeedLineUpWithUniqueID:(id)a0 pagePath:(id)a1 launchFrom:(id)a2 entranceForm:(id)a3 timing:(unsigned long long)a4;
+ (void)consumeStrategyWithUniqueID:(id)a0 info:(id)a1;
+ (void)refreshLineUpRecordWithUniqueID:(id)a0;
+ (void)trackMsgErrorWithUniqueID:(id)a0 issueID:(id)a1 strategyID:(id)a2 pagePath:(id)a3 pushSource:(id)a4 errMsg:(id)a5;
+ (BOOL)isLineUpModelValid:(id)a0 errorCallback:(id /* block */)a1;
+ (BOOL)isAllConditionMatch:(id)a0 uniqueID:(id)a1 pagePath:(id)a2 launchFrom:(id)a3 entranceForm:(id)a4 timing:(unsigned long long)a5 errorCallback:(id /* block */)a6;
+ (BOOL)isRangeListMatch:(id)a0 issueID:(id)a1 uniqueID:(id)a2;
+ (unsigned long long)randomLineUpTimeWithUp:(unsigned long long)a0 down:(unsigned long long)a1;
+ (id)lineUpRecordKeyWithIssueID:(id)a0 strategyID:(id)a1;
+ (BOOL)isReduplicationMatch:(unsigned long long)a0 timing:(unsigned long long)a1 uniqueID:(id)a2 issueID:(id)a3 strategyID:(id)a4;
+ (BOOL)isPageMatch:(id)a0 pagePath:(id)a1 pageStrategy:(unsigned long long)a2 timing:(unsigned long long)a3 errorCallback:(id /* block */)a4;

@end
