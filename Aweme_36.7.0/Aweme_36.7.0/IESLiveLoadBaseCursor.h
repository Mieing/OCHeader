@class IESLiveComponentLoadStrategyProcessor, IESLiveLoadStrategyConfig;

@interface IESLiveLoadBaseCursor : NSObject

@property (weak, nonatomic) IESLiveComponentLoadStrategyProcessor *loadStrategyProcessor;
@property (copy, nonatomic) id /* block */ completedCallback;
@property (nonatomic) int componentCount;
@property (nonatomic) int curIndex;
@property (nonatomic) BOOL avoidDuplicateLog;
@property (retain, nonatomic) IESLiveLoadStrategyConfig *strategyConfig;
@property (copy, nonatomic) id /* block */ getLoadStrategyConfigBlock;

- (void)fireLoopWithMaxTime:(double)a0;
- (BOOL)canLoadCurrentLevel;
- (id)levelOrStage;
- (id)getStrategyConfig;
- (id)realArray;
- (void)loadCurrentLevelFinished;
- (void)runCallback:(id)a0;
- (id)compStrWithComponents:(id)a0;
- (void)fireWithLimitTime:(double)a0;
- (void).cxx_destruct;
- (id)flagDescription;

@end
