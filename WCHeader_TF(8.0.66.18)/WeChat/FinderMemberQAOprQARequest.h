@class BaseRequest, NSString, FinderBaseRequest, FinderObjectDesc;

@interface FinderMemberQAOprQARequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) FinderObjectDesc *objectDesc;
@property (retain, nonatomic) NSString *myUsername;
@property (retain, nonatomic) NSString *msProviderUsername;
@property (nonatomic) unsigned long long refObjectid;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int oprType;
@property (retain, nonatomic) NSString *clientid;
@property (nonatomic) unsigned long long clientMs;
@property (nonatomic) unsigned int oprRole;
@property (nonatomic) unsigned long long postFlag;

+ (void)initialize;

@end
