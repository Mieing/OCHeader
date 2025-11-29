@class NSMutableArray;

@interface _HTSBootDelayQueue : NSObject

@property (retain, nonatomic) NSMutableArray *mainTasks;
@property (retain, nonatomic) NSMutableArray *backgroundTasks;

- (void).cxx_destruct;
- (id)init;

@end
