@class NSEnumerator, NSArray, NSString, NSError, NSMutableArray, AWEShareContext;
@protocol AWEShareView, AWEShareStage, AWEShareChannel;

@interface AWEShareBaseTask : NSObject <AWEShareTask, AWEShareStageDelegate, AWEIMShareTaskLifeCycleMessage> {
    NSMutableArray *_mutableStages;
}

@property (retain, nonatomic) id retainedSelf;
@property (nonatomic) BOOL automaticallyExecutes;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id<AWEShareChannel> channel;
@property (copy, nonatomic) NSArray *preparingStages;
@property (retain, nonatomic) id<AWEShareStage> currentStage;
@property (retain, nonatomic) NSEnumerator *stageEnumerator;
@property (retain, nonatomic) NSMutableArray *preparedHandlers;
@property (retain, nonatomic) NSMutableArray *completedHandlers;
@property (nonatomic) BOOL isTaskEndWithMoreButton;
@property (weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) AWEShareContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithContext:(id)a0;

- (void)ironManShareEndWithMoreButton;
- (void)addPreparedHandler:(id /* block */)a0;
- (void)appendStage:(id)a0;
- (id)allStages;
- (BOOL)continueToNextStage;
- (BOOL)shouldRunStage:(id)a0;
- (void)runStage:(id)a0;
- (void)prepareWithChannel:(id)a0 inView:(id)a1;
- (void)prependStage:(id)a0;
- (void)shareStage:(id)a0 didFinishWithResult:(unsigned long long)a1 error:(id)a2;
- (void)prepareNextStageAtIndex:(unsigned long long)a0;
- (void)didFinishPreparingWithSuccess:(BOOL)a0;
- (void)executeImmediately;
- (void)finishWithResult:(unsigned long long)a0 error:(id)a1 clearTracker:(BOOL)a2;
- (BOOL)enablePrepareWithChannel:(id)a0 inView:(id)a1;
- (void)appendStages:(id)a0;
- (void)prependStages:(id)a0;
- (void)removeAllStages;
- (void).cxx_destruct;
- (void)addCompletedHandler:(id /* block */)a0;
- (void)finishWithResult:(unsigned long long)a0 error:(id)a1;
- (void)execute;
- (id)initWithContext:(id)a0;
- (void)reset;
- (void)dealloc;

@end
