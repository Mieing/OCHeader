@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderModEventRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long eventTopicId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
