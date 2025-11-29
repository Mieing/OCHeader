@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderClickFeedBackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long feedId;
@property (nonatomic) unsigned int sourceType;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *exportId;
@property (nonatomic) unsigned int liveScene;
@property (nonatomic) unsigned int feedbackType;

+ (void)initialize;

@end
