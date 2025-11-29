@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderFeedbackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int feedbackType;
@property (nonatomic) unsigned int subType;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int liveScene;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSMutableArray *subTypeList;
@property (retain, nonatomic) NSString *exportId;
@property (nonatomic) unsigned int satisfactionQuestSubType;

+ (void)initialize;

@end
