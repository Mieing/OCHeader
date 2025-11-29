@class IESLiveLoadTaskStageItem, IESLiveComponentLoadStrategyProcessor, NSDictionary, IESLiveLoadCreateCursor, IESLiveLoadCursor;
@protocol IESLiveBootableModel;

@interface IESLiveComponentLoadOptimezer : NSObject

@property (retain, nonatomic) id<IESLiveBootableModel> room;
@property (retain, nonatomic) IESLiveLoadCursor *basicCursor;
@property (retain, nonatomic) IESLiveLoadCursor *importantCursor;
@property (retain, nonatomic) IESLiveLoadCursor *normalCursor;
@property (retain, nonatomic) IESLiveLoadCursor *downgradableCursor;
@property (weak, nonatomic) IESLiveLoadCursor *currentCursor;
@property (nonatomic) BOOL looping;
@property (retain, nonatomic) IESLiveLoadCreateCursor *currentBaseCursor;
@property (retain, nonatomic) IESLiveLoadTaskStageItem *taskStage;
@property (nonatomic) BOOL loadPause;
@property (retain, nonatomic) NSDictionary *preloadStrategyConfig;
@property (nonatomic) BOOL customEnable;
@property (weak, nonatomic) IESLiveComponentLoadStrategyProcessor *loadStrategyProcessor;
@property (nonatomic) BOOL preloading;

- (BOOL)loadWithLevel:(long long)a0 loadComponents:(id)a1 loadCallback:(id /* block */)a2 afterAction:(id /* block */)a3;
- (BOOL)enableWithComponentCreate;
- (BOOL)finishedTaskWithStage:(unsigned long long)a0;
- (void)loadWithTaskItem:(id)a0;
- (void)contiueLoadComponentLimitTime:(double)a0;
- (long long)currentLoadLevel;
- (void)updateRealStrategyConfig:(id)a0;
- (void)setUpLoadStrategyWithLevel:(long long)a0 strategyProcessor:(id)a1 cursor:(id)a2 supportType:(unsigned long long)a3;
- (id)filterConfig:(id)a0 taskProcess:(unsigned long long)a1;
- (id)cursorWithLevel:(long long)a0;
- (BOOL)loadWithLevel:(long long)a0 event:(id)a1 endAction:(id /* block */)a2;
- (void).cxx_destruct;
- (void)pause;
- (void)clearAll;
- (void)resume;
- (id)initWithRoom:(id)a0;

@end
