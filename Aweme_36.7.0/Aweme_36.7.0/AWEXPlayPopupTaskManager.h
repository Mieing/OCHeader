@class NSMutableArray;

@interface AWEXPlayPopupTaskManager : NSObject

@property (retain) NSMutableArray *tasks;
@property BOOL isRunning;

- (void)runTasks;
- (void)addTask:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
