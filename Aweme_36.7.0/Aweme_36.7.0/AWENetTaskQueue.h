@class NSString, NSMutableArray, NSMapTable;

@interface AWENetTaskQueue : NSObject <AWENetTaskQueueProtocol>

@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) NSMapTable *taskMaper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dequeueTaskNamed:(id)a0;
- (BOOL)taskExistNamed:(id)a0;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dequeue;
- (unsigned long long)taskCount;

@end
