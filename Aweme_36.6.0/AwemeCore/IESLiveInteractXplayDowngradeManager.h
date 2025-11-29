@class NSDictionary;

@interface IESLiveInteractXplayDowngradeManager : NSObject

@property (copy, nonatomic) NSDictionary *allTasks;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL activaterEnabled;

- (id)initWithDIContext:(id)a0;
- (void)livePerformanceStateChanged:(id)a0;
- (void)deactivateTask:(unsigned long long)a0;
- (void)activateTask:(unsigned long long)a0;
- (void)startDynamicListener;
- (void)stopDynamicListener;
- (void).cxx_destruct;
- (void)dealloc;

@end
