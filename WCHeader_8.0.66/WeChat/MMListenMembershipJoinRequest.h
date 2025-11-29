@class BaseRequest, NSString, NSData;

@interface MMListenMembershipJoinRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int joinType;
@property (retain, nonatomic) NSString *packageId;
@property (retain, nonatomic) NSData *subscriptionExtInfo;
@property (retain, nonatomic) NSString *adToken;

+ (void)initialize;

@end
