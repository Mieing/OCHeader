@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderContactTagOptionReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *wxUsername;
@property (nonatomic) unsigned int optionType;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
