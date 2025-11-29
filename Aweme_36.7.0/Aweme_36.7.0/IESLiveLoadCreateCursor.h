@class NSMutableArray, IESLiveBootloaderTaskItem;

@interface IESLiveLoadCreateCursor : IESLiveLoadBaseCursor

@property (retain, nonatomic) NSMutableArray *models;
@property (retain, nonatomic) IESLiveBootloaderTaskItem *taskItem;
@property (nonatomic) double startTime;

- (BOOL)canLoadCurrentLevel;
- (id)levelOrStage;
- (id)getStrategyConfig;
- (id)realArray;
- (void)runCallback:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)finish;

@end
