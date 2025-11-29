@class NSMutableDictionary;
@protocol IESLiveLinkIntentDelegate;

@interface IESLiveLinkIntent : NSObject

@property (retain, nonatomic) NSMutableDictionary *sessionInfos;
@property (retain, nonatomic) id<IESLiveLinkIntentDelegate> delegate;

- (void)startRecordBusinessKey:(id)a0 entity:(id)a1;
- (void)endRecordBusinessKey:(id)a0 entity:(id)a1;
- (id)tagWithSessionId:(id)a0;
- (id)sessionInfoWithSessionId:(id)a0 needCreate:(BOOL)a1;
- (void)removeSubscribeStateChangeWithSessionId:(id)a0;
- (id)objectWithProtocol:(id)a0 sessionId:(id)a1;
- (void)bindObject:(id)a0 forProtocolString:(id)a1 sessionId:(id)a2;
- (void)subscribeTaskWithSession:(id)a0 taskId:(id)a1 callback:(id /* block */)a2;
- (void)removeSubscribeTaskWithSession:(id)a0 taskId:(id)a1;
- (BOOL)finishedTaskWithSession:(id)a0 taskId:(id)a1;
- (void)subscribeNodeStateChangeWithSessionId:(id)a0 callback:(id /* block */)a1;
- (void)notifyFinishedTaskId:(id)a0 nodeId:(id)a1 sessionId:(id)a2;
- (void)traceSession:(id)a0 traceKey:(id)a1 duration:(id)a2;
- (void)clearSession:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
