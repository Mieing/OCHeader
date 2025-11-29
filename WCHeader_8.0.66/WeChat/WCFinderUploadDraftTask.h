@class NSString, NSMutableArray;

@interface WCFinderUploadDraftTask : NSObject

@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) SEL action;
@property (nonatomic) SEL resultHandler;
@property (nonatomic) SEL failedHandler;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) id obj;
@property (retain, nonatomic) NSMutableArray *subTasks;
@property (retain, nonatomic) NSMutableArray *doneSubTasks;
@property (readonly, nonatomic) WCFinderUploadDraftTask *currentTask;

+ (id)taskWithTaskId:(id)a0 action:(SEL)a1 obj:(id)a2;

- (void)addSubTask:(id)a0;
- (BOOL)turnNextSubTask;
- (void).cxx_destruct;

@end
