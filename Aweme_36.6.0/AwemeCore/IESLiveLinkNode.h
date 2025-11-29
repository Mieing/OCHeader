@class NSMutableDictionary, NSDictionary, NSString, NSArray, NSMutableArray, IESLiveLinkIntent;

@interface IESLiveLinkNode : NSObject <IESLiveLinkTraceProtocol>

@property (retain, nonatomic) NSDictionary *originConfig;
@property (retain, nonatomic) NSMutableDictionary *dependencyGroup;
@property (retain, nonatomic) NSMutableDictionary *controlOverTimePool;
@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSMutableDictionary *tracePool;
@property (retain, nonatomic) NSMutableDictionary *traceTempMetric;
@property (nonatomic) BOOL fired;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSString *nodeId;
@property (retain, nonatomic) NSString *interfaceService;
@property (retain, nonatomic) IESLiveLinkIntent *intent;
@property (retain, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSArray *taskList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeSelf;
- (void)updateContextParam:(id)a0;
- (void)invokeAllTask;
- (id)taskWithUniqueId:(id)a0;
- (void)invokeOneTask:(id)a0;
- (id)taskWithTaskClass:(Class)a0;
- (void)setUpConfig:(id)a0;
- (id)tracePrefix;
- (void)invokeLinkTaskInfo:(id)a0 taskBlock:(id /* block */)a1 finishedBlock:(id /* block */)a2;
- (BOOL)couldRemoveAll;
- (void)_checkInvokeTask:(id)a0;
- (void)_invokeTask:(id)a0 taskBlock:(id /* block */)a1;
- (id)nodeGroupId;
- (BOOL)isAllFinished;
- (void)_realInvokeTask:(id)a0;
- (id)traceKeyWithTask:(id)a0;
- (void)_finishedTask:(id)a0;
- (void)flushTaskWithItem:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;
- (id)getSessionId;

@end
