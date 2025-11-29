@class NSString;

@interface BizTopic : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *topicName;
@property (retain, nonatomic) NSString *topicDesc;
@property (retain, nonatomic) NSString *topicUrl;
@property (nonatomic) unsigned long long topicId;

+ (void)initialize;

- (void)setTopicId:(unsigned long long)a0;
- (unsigned long long)topicId;
- (void)setTopicUrl:(id)a0;
- (id)topicUrl;
- (void)setTopicDesc:(id)a0;
- (id)topicDesc;
- (void)setTopicName:(id)a0;
- (id)topicName;

@end
