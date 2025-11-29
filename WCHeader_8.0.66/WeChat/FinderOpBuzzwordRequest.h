@class BaseRequest, FinderBaseRequest;

@interface FinderOpBuzzwordRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long buzzwordId;
@property (nonatomic) unsigned int operationType;

+ (void)initialize;

@end
