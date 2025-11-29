@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderSeeLaterRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NSString *sessionBuffer;

+ (void)initialize;

@end
