@class NSDictionary, NSString, NSArray;

@interface AWEIMIncentiveChatTask : NSObject

@property (copy, nonatomic) NSDictionary *dictionaryRawData;
@property (nonatomic) long long taskId;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL completed;
@property (copy, nonatomic) NSArray *hasCompletedChatList;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
