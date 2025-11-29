@class NSString;

@interface FinderGetTopicInfoResponse_RedirectTopicInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int openRedirect;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *encryptedTopicEventId;
@property (retain, nonatomic) NSString *topicWording;
@property (nonatomic) unsigned int topicType;

+ (void)initialize;

@end
