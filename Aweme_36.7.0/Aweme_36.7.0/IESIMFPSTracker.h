@class NSMutableDictionary, NSSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMFPSTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *frameTrace;
@property (retain, nonatomic) NSMutableDictionary *scrollTrace;
@property (retain, nonatomic) NSHashTable *envBlockSet;
@property (retain, nonatomic) NSMutableDictionary *events;
@property (retain, nonatomic) NSMutableDictionary *actionTraceTypeDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) NSSet *bootTaskNamesBeforeScroll;
@property (nonatomic) BOOL bootTaskNotIncreased;

- (void)handleScrollBegin;
- (void)injectEnvBlock:(id /* block */)a0;
- (void)customizeActionTraceTypes:(id)a0;
- (void)onEvent:(long long)a0 time:(unsigned long long)a1;
- (void)onActionBegin:(long long)a0 time:(unsigned long long)a1 frameID:(unsigned short)a2;
- (void)onActionTrait:(long long)a0 traitDict:(id)a1 frameID:(unsigned short)a2;
- (void)onActionEnd:(long long)a0 time:(unsigned long long)a1 frameID:(unsigned short)a2;
- (void)reportScrollResult:(id)a0 scrollMetrics:(id)a1;
- (void)cleanTrace;
- (id)p_makeFrameTraceOf:(long long)a0;
- (void)p_archiveFrameTrace:(id)a0 actionName:(long long)a1;
- (id)p_makeEventDict:(unsigned long long)a0;
- (id)p_handleBootTaskAfterScroll;
- (id)p_makeBootTaskJSONStr:(id)a0;
- (id)p_makeActionTraceDict:(double)a0;
- (void)p_cleanTrace;
- (void)p_handleBootTaskBeforeScroll;
- (unsigned long long)p_actionThreadInUS;
- (id)p_makeScrollTraceIfNeeded:(long long)a0;
- (id)p_allActionKey;
- (id)p_finalTrace:(long long)a0;
- (id)p_actionKey:(long long)a0;
- (id)p_actionCountKey:(long long)a0;
- (id)p_actionTraitKey:(long long)a0 traitName:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
