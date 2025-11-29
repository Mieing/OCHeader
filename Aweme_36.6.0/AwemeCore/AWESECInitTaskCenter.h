@class NSMutableDictionary;

@interface AWESECInitTaskCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskTimingDict;
@property (retain, nonatomic) NSMutableDictionary *taskDict;

+ (BOOL)rulerInitTaskEnabled;
+ (id)shared;
+ (BOOL)enabled;
+ (id)settings;

- (void)configTasks;
- (void)configColdLaunchTasks;
- (void)configFeedReadyTasks;
- (void)addTask:(id)a0 forTiming:(id)a1;
- (void)addTask:(id)a0 forName:(id)a1;
- (id)taskNamesForTiming:(id)a0;
- (id)taskForName:(id)a0;
- (id)tasksForTiming:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
