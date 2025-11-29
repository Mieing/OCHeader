@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FetchFinderSubscribeMembershipPayBillRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int monthCount;
@property (nonatomic) unsigned int subscriptionType;
@property (retain, nonatomic) NSData *subscriptionExtInfo;
@property (retain, nonatomic) NSString *memberInletSource;

+ (void)initialize;

@end
