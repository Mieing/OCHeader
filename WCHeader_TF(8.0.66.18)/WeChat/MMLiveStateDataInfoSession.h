@class MMLiveTaskId;

@interface MMLiveStateDataInfoSession : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) unsigned long long floatStatePauseTime;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isFloat;
@property (nonatomic) unsigned long long countedFloatPauseStartTs;

- (id)initWithTaskId:(id)a0;
- (unsigned long long)floatStatePauseDuration;
- (void)onAction:(unsigned long long)a0;
- (void)calculateFloatStatePauseTime;
- (void).cxx_destruct;

@end
