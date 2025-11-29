@class NSTimer, NSString, NSArray, APBEventListener, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject, APBResponse;
@protocol OS_dispatch_semaphore, IBioAuthFactor, IBioAuthTask;

@interface APBReactor : NSObject <APBEventProtocol, BioAuthTaskDelegate> {
    NSObject<OS_dispatch_semaphore> *_reactorLock;
}

@property (nonatomic) long long currentTaskIndex;
@property (copy, nonatomic) id /* block */ rcb;
@property (retain, nonatomic) APBEventListener *eventListener;
@property (retain, nonatomic) APBResponse *response;
@property (retain, nonatomic) NSArray *tasks;
@property (retain, nonatomic) NSDictionary *globalConfig;
@property (retain, nonatomic) NSDictionary *taskConfig;
@property (retain, nonatomic) NSMutableArray *parallelTasks;
@property (retain, nonatomic) NSTimer *globalTimer;
@property (retain, nonatomic) NSTimer *taskTimer;
@property (retain, nonatomic) id<IBioAuthFactor> factor;
@property (weak, nonatomic) id<IBioAuthTask> currentTask;
@property (weak, nonatomic) NSMutableDictionary *currentPipeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)exec:(id)a0 withCompletionCallback:(id /* block */)a1;
- (void)onTaskTimer:(id)a0;
- (void)onGlobalTimer:(id)a0;
- (void)eventTriggered:(id)a0;
- (void)task:(id)a0 stateChanged:(int)a1;
- (void)runWithGlobalConfig:(id)a0 withResponseCallback:(id /* block */)a1;
- (BOOL)_object:(id)a0 responseToSelector:(SEL)a1;
- (void)execBackwardCommand:(id)a0;
- (void)internalExit;
- (void)processStateChange:(id)a0;
- (void)processParallelStateChange:(id)a0 withObject:(id)a1;
- (void)runTask:(long long)a0 withPipeInfo:(id)a1;
- (void)_resetTask:(id)a0 forceOnMainThread:(BOOL)a1;
- (void)_resetAllTask:(id)a0 forceOnMainThread:(BOOL)a1;
- (void)_removeAllKVObserver:(id)a0;
- (BOOL)observerKeyPath:(id)a0 observer:(id)a1 observercance:(id)a2;
- (void)_removeKVObserver:(id)a0;
- (void)_addKVOObserver:(id)a0;
- (id)eventByType:(long long)a0 parm:(id)a1;
- (void)_addTaskTimer;
- (void)_addGlobalTimer;
- (void).cxx_destruct;
- (id)init;
- (void)_setUp;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)setTaskList:(id)a0;

@end
