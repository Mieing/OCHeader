@class BaseRequest, FinderBaseRequest, FinderLiveContact;

@interface FinderGetAudienceLiveInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderLiveContact *audienceContact;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
