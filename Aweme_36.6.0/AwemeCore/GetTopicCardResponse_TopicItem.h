@class NSString;

@interface GetTopicCardResponse_TopicItem : IESLivePBBaseMessage

@property (nonatomic) long long topicId;
@property (copy, nonatomic) NSString *topicQuery;

+ (id)descriptor;

@end
