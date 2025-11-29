@class NSString, NSData;

@interface OMJAIGCTaskInfo : NSObject

@property (copy, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSData *contextData;

- (id)initWithTaskID:(id)a0 contextData:(id)a1;
- (void).cxx_destruct;

@end
