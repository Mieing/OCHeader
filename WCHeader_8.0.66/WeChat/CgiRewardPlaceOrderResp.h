@class NSString, BaseResponse;

@interface CgiRewardPlaceOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *rewardId;
@property (retain, nonatomic) NSString *transId;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSString *remindStr;
@property (retain, nonatomic) NSString *receiverOpenId;
@property (retain, nonatomic) NSString *extendStr;

+ (void)initialize;

@end
