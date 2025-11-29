@class FinderClientStatus, BaseRequest, NSString, NSData, FinderBaseRequest, TopicFilter, FinderSectionInfo;

@interface FinderGetTopicListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int topicType;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned long long fromObjectId;
@property (nonatomic) unsigned int displayTabType;
@property (retain, nonatomic) TopicFilter *topicFilter;
@property (retain, nonatomic) FinderSectionInfo *sectionInfo;
@property (nonatomic) unsigned int fromType;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned long long topicId;
@property (retain, nonatomic) NSData *topicBuffer;
@property (retain, nonatomic) NSString *encryptedTopicid;
@property (nonatomic) unsigned int innerTabType;
@property (retain, nonatomic) NSData *byPassInfo;
@property (nonatomic) unsigned int rollDir;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int mediaTabType;
@property (nonatomic) unsigned int prefetchType;
@property (retain, nonatomic) NSData *nextObjectBuffer;

+ (void)initialize;

@end
