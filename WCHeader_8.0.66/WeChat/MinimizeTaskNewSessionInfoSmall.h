@class NSString, NSMutableArray, MinimizeTaskData;

@interface MinimizeTaskNewSessionInfoSmall : NSObject

@property (retain, nonatomic) NSString *smallSessionId;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (retain, nonatomic) NSMutableArray *stateHistory;
@property (nonatomic) BOOL isFold;
@property (nonatomic) BOOL isPlaying;

- (id)init;
- (unsigned long long)calcStayTime;
- (unsigned long long)calcFoldPlayTime;
- (unsigned long long)calcExpandPlayTime;
- (void)recordStateChangeWithEvent:(unsigned int)a0 andTaskData:(id)a1;
- (unsigned int)currentState;
- (void)recordStateChangeWithCurrentState;
- (void).cxx_destruct;

@end
