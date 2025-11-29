@class NSString;

@interface OpenFinderTopicPageReq : WXPBGeneratedMessage

@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) unsigned int topicEnterSource;

+ (void)initialize;

@end
