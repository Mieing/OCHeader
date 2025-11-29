@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderFollowVerifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long followId;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
