@class MMLiveTaskId;

@interface MMFinderLiveConnectMicFlowReporter : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;

- (id)initWithTaskId:(id)a0;
- (void)reportWithUserId:(id)a0 opType:(unsigned long long)a1 andOpMsg:(id)a2;
- (void)reportStartAnchorMicWithUserId:(id)a0 andOpType:(unsigned long long)a1;
- (void)reportAnchorMicConnectedWithUserId:(id)a0 andRoleType:(unsigned long long)a1;
- (void)reportAcceptAudienceMicWithUserId:(id)a0;
- (void)reportAudienceMicConnectedWithUserId:(id)a0 andRoleType:(unsigned long long)a1;
- (void)reportMicEndedWithUserId:(id)a0 endType:(unsigned long long)a1 andRoleType:(unsigned long long)a2;
- (void)reportMicEndedWithUserId:(id)a0 endType:(unsigned long long)a1 reason:(long long)a2 andRoleType:(unsigned long long)a3;
- (void)reportRemoteUserEvent:(unsigned long long)a0 withUserId:(id)a1;
- (void).cxx_destruct;

@end
