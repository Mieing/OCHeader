@class BaseRequest, NSString, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderMakePackageOrderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int targetLevel;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) unsigned long long orderWecoinAmount;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
