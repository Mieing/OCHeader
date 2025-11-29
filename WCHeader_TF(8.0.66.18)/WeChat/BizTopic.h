@class NSString;

@interface BizTopic : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *topicName;
@property (retain, nonatomic) NSString *topicDesc;
@property (retain, nonatomic) NSString *topicUrl;
@property (nonatomic) unsigned long long topicId;

+ (void)initialize;

@end
