@class AWEBootConfigQueue;

@interface HTSBootLaunchStage : NSObject

@property (retain, nonatomic) AWEBootConfigQueue *normalQueue;
@property (retain, nonatomic) AWEBootConfigQueue *firstForegroundQueue;
@property (nonatomic) BOOL validExist;
@property (readonly) id /* block */ addTask;
@property (readonly) id /* block */ addNormalQueueTask;
@property (readonly) id /* block */ addFirstFGQueueTask;
@property (readonly) id /* block */ addTaskGroup;

- (id)initWithValidExist:(BOOL)a0 qos:(unsigned int)a1;
- (void).cxx_destruct;

@end
