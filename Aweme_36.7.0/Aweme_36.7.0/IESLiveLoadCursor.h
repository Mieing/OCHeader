@class NSMutableArray;

@interface IESLiveLoadCursor : IESLiveLoadBaseCursor

@property (retain, nonatomic) NSMutableArray *components;
@property (copy, nonatomic) id /* block */ loadCallback;
@property (copy, nonatomic) id /* block */ afterMountAction;
@property (copy, nonatomic) id /* block */ endMountAction;
@property (nonatomic) long long level;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL enable;

- (BOOL)canLoadCurrentLevel;
- (id)levelOrStage;
- (id)getStrategyConfig;
- (id)realArray;
- (void)loadCurrentLevelFinished;
- (void)runCallback:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)finish;

@end
