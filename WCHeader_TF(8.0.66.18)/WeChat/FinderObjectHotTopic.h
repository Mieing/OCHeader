@class NSString, NSData;

@interface FinderObjectHotTopic : WXPBGeneratedMessage

@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *topicName;
@property (nonatomic) unsigned int topicType;
@property (nonatomic) unsigned int jumpFlag;
@property (retain, nonatomic) NSData *topicBuffer;

+ (void)initialize;

@end
