@class NSString;

@interface AWEStudioAIGCTaskTransformInput : NSObject

@property (readonly, copy, nonatomic) NSString *taskID;
@property (readonly, copy, nonatomic) NSString *bizType;
@property (readonly, nonatomic) BOOL isAsync;

- (id)initWithTaskID:(id)a0 bizType:(id)a1 isAsync:(BOOL)a2;
- (void).cxx_destruct;

@end
