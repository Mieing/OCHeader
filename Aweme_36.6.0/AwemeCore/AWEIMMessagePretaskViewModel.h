@class AWEIMTaskManager;

@interface AWEIMMessagePretaskViewModel : NSObject

@property (retain, nonatomic) AWEIMTaskManager *taskManager;

- (void)removeAllTasks;
- (void)didEndDisplayingCell:(id)a0 message:(id)a1;
- (void)willDisplayCell:(id)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
