@interface BDPBlockEnterService : NSObject

+ (void)trackMsgErrorWithUniqueID:(id)a0 issueID:(id)a1 pushSource:(id)a2 errMsg:(id)a3;
+ (BOOL)isIssueModelValid:(id)a0 errorCallback:(id /* block */)a1;
+ (BOOL)isRatioMatch:(id)a0 issueID:(id)a1 ratio:(unsigned long long)a2;
+ (id)checkIfNeedBlockEnterWithUniqueID:(id)a0 pagePath:(id)a1 launchFrom:(id)a2 entranceForm:(id)a3;

@end
