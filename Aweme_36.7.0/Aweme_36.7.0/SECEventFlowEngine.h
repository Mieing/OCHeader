@class NSObject, NSArray, NSMutableDictionary, NSMutableArray, SECEventFlowTaggedEventList;
@protocol OS_dispatch_queue;

@interface SECEventFlowEngine : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_cleanQueue;
}

@property (copy, nonatomic) NSArray *eventSourceTypes;
@property (retain, nonatomic) SECEventFlowTaggedEventList *eventFlow;
@property (retain, nonatomic) NSMutableDictionary *eventListBySource;
@property (retain, nonatomic) NSMutableDictionary *eventCountBySource;
@property (retain, nonatomic) NSMutableArray *nodeBin;
@property BOOL enabled;
@property BOOL threadOpt;
@property unsigned long long nodeCleanLimit;

+ (id)sceneDetect;
+ (BOOL)detectScene:(id)a0;
+ (id)detectAllSceneNow;
+ (id)extractInfoFromScenes:(id)a0;
+ (BOOL)execute:(id)a0 withParams:(id)a1 defaultVal:(BOOL)a2 error:(id *)a3 fallback:(BOOL)a4;
+ (id)executeAny:(id)a0 withParams:(id)a1 error:(id *)a2 fallback:(BOOL)a3;
+ (id)validateParams:(id)a0 source:(id)a1 fallback:(BOOL)a2;
+ (id)validateParams:(id)a0 fallback:(BOOL)a1;
+ (id)shared;

- (void)setupFuncsAndOperators;
- (void)_appendTaggedEvent:(id)a0;
- (void)appendTaggedEvent:(id)a0 forOneTag:(id)a1;
- (void)submitCleanTask:(id)a0;
- (BOOL)_executeCleanTask:(id)a0;
- (unsigned long long)eventUpperLimitBySource:(id)a0;
- (void)_putNodeInBin:(id)a0;
- (void)_clearNodeBin:(id)a0;
- (BOOL)detectScene:(id)a0;
- (id)detectAllSceneNow;
- (id)extractInfoFromScenes:(id)a0;
- (BOOL)execute:(id)a0 withParams:(id)a1 defaultVal:(BOOL)a2 error:(id *)a3 fallback:(BOOL)a4;
- (id)executeAny:(id)a0 withParams:(id)a1 error:(id *)a2 fallback:(BOOL)a3;
- (id)validateParams:(id)a0 source:(id)a1 fallback:(BOOL)a2;
- (id)validateParams:(id)a0 fallback:(BOOL)a1;
- (BOOL)detectSceneWithoutLock:(id)a0 bounds:(id)a1;
- (id)extractInfoFromScenesWithoutLock:(id)a0 bounds:(id)a1;
- (void)appendTaggedEvent:(id)a0;
- (id)allTagsForEventFlow;
- (void)setupWithEventSourceTypes:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
