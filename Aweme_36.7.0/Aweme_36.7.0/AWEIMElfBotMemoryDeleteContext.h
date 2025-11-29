@class NSString, NSDictionary;

@interface AWEIMElfBotMemoryDeleteContext : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) BOOL isDeleteAllTopic;
@property (copy, nonatomic) NSString *topicId;
@property (copy, nonatomic) NSDictionary *topic;

- (void).cxx_destruct;

@end
