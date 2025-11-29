@class NSString;

@interface AWEIMIncentiveChatBagTask : NSObject

@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *taskToken;
@property (copy, nonatomic) NSString *taskGroupId;
@property (copy, nonatomic) NSString *taskTokenEnterFrom;
@property (copy, nonatomic) NSString *scene;

- (id)initWithMangoReflowDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
