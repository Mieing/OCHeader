@class BaseRequest, FinderBaseRequest, NSString;

@interface NewLifeThumbUpReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned long long thumbupId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int newlifeType;

+ (void)initialize;

@end
