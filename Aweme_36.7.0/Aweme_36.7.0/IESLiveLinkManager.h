@class IESLiveLinkDependencyChecker, NSMutableDictionary, NSDictionary, NSString, IESLiveLinkIntent;

@interface IESLiveLinkManager : NSObject <IESLiveLinkIntentDelegate>

@property (retain, nonatomic) NSMutableDictionary *sessionPools;
@property (retain, nonatomic) NSDictionary *originNodeConfig;
@property (retain, nonatomic) IESLiveLinkIntent *intent;
@property (retain, nonatomic) IESLiveLinkDependencyChecker *dependencyChecker;
@property (retain, nonatomic) NSMutableDictionary *checkCollection;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (id)configWithType:(unsigned long long)a0;
- (void)fireAudienceRoomLinkNodeId:(id)a0 sessionId:(id)a1 context:(id)a2;
- (void)removeSessionWithId:(id)a0;
- (void)removeAllWithSessionType:(unsigned long long)a0;
- (void)replaceOriginSessionId:(id)a0 toSessionId:(id)a1;
- (id)sessionTagWithSessionId:(id)a0;
- (void)fireLinkNodeId:(id)a0 sessionType:(unsigned long long)a1 sessionId:(id)a2 context:(id)a3;
- (void)checkConfigValid;
- (id)tagKeyWithType:(unsigned long long)a0;
- (id)poolWithSessionId:(id)a0 needCreate:(BOOL)a1;
- (BOOL)checkHeadWithSessionType:(unsigned long long)a0 nodeId:(id)a1;
- (BOOL)checkTailWithSessionType:(unsigned long long)a0 nodeId:(id)a1;
- (id)poolCheckRepetitionWithSessionId:(id)a0 sessionType:(unsigned long long)a1 nodeId:(id)a2;
- (void)removeNodeWithSessionId:(id)a0 nodeId:(id)a1;
- (id)addTaskWithLinkNodeId:(id)a0 sessionType:(unsigned long long)a1 sessionId:(id)a2 taskInfo:(id)a3 taskBlock:(id /* block */)a4 finishedBlock:(id /* block */)a5;
- (id)linkNodeWithNodeId:(id)a0 sessionId:(id)a1;
- (void)removeAllSession;
- (void).cxx_destruct;
- (id)init;

@end
