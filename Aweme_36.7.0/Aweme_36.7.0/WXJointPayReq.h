@class NSString;

@interface WXJointPayReq : BaseReq

@property (copy, nonatomic) NSString *partnerId;
@property (copy, nonatomic) NSString *prepayId;
@property (copy, nonatomic) NSString *nonceStr;
@property (nonatomic) unsigned int timeStamp;
@property (copy, nonatomic) NSString *package;
@property (copy, nonatomic) NSString *sign;

- (void).cxx_destruct;

@end
