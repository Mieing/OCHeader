@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetTopicInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSString *encryptedTopicEventId;
@property (retain, nonatomic) NSString *topicWording;
@property (nonatomic) unsigned int topicType;
@property (nonatomic) unsigned long long fromObjectId;
@property (retain, nonatomic) NSString *shortUrl;
@property (retain, nonatomic) NSData *topicInfoPassbuff;
@property (nonatomic) unsigned int getTopicInfoFlag;
@property (nonatomic) unsigned int prefetchType;

+ (void)initialize;

@end
