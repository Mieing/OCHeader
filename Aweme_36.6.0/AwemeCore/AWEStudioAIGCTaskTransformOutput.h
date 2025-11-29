@class NSString, NSError;

@interface AWEStudioAIGCTaskTransformOutput : NSObject

@property (readonly, nonatomic) BOOL success;
@property (readonly, copy, nonatomic) NSString *taskID;
@property (readonly, nonatomic) NSError *error;

- (id)initWithSuccess:(BOOL)a0 taskID:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
