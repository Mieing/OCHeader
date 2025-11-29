@class HTSLiveCustomTopic;

@interface SelectCustomTopicResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCustomTopic *topic;
@property (nonatomic) BOOL hasTopic;

+ (id)descriptor;

@end
