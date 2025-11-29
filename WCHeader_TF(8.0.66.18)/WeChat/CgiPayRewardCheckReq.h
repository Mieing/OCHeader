@class BaseRequest, NSString;

@interface CgiPayRewardCheckReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *rewardId;
@property (retain, nonatomic) NSString *transId;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSString *receiverOpenId;
@property (retain, nonatomic) NSString *extendStr;

+ (void)initialize;

@end
