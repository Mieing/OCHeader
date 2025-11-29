@class NSString;

@interface AWEIMMangoShareTaskInfo : NSObject

@property (readonly, copy, nonatomic) NSString *taskID;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSString *group;

- (id)initWithTaskID:(id)a0 token:(id)a1 group:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)jsonString;

@end
