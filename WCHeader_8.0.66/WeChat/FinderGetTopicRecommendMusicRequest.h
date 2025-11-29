@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetTopicRecommendMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *encryptedTopicEventId;
@property (retain, nonatomic) NSString *topicWording;
@property (nonatomic) unsigned int topicType;
@property (nonatomic) unsigned long long fromObjectId;

+ (void)initialize;

@end
