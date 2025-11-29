@class NSString, NSMutableDictionary, NSMapTable, NSMutableArray;

@interface IESLiveLinkSessionInfo : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *sessionName;
@property (retain, nonatomic) NSMutableDictionary *dependencyObjPool;
@property (retain, nonatomic) NSMutableArray *taskCallbackArray;
@property (retain, nonatomic) NSMapTable *registry;
@property (retain, nonatomic) NSMutableDictionary *traceTempMetric;
@property (retain, nonatomic) NSMutableDictionary *sessionTracePool;
@property (nonatomic) BOOL traceEnable;

- (void)reportTrace;
- (id)dependencyObjWithId:(id)a0 needCreate:(BOOL)a1;
- (void)_traceSessionWithKey:(id)a0 duration:(id)a1;
- (void)_reportTraceWithDict:(id)a0 category:(id)a1;
- (void)_removeSubscribeCallback;
- (id)_objectWithProtocolString:(id)a0;
- (void)_bindObject:(id)a0 forProtocolString:(id)a1;
- (void)_subscribeTaskWithId:(id)a0 callback:(id /* block */)a1;
- (void)_removeSubscribeTaskWithId:(id)a0;
- (BOOL)_finishedTaskWithId:(id)a0;
- (void)_notifyFinishedTaskId:(id)a0;
- (void)_addSubscribeCallback:(id /* block */)a0;
- (void)_notifyTaskChanged;
- (void)_recordBusinessKey:(id)a0;
- (void)_endRecordBusinessKey:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
