@class NSString;

@interface PayReq : BaseReq

@property (retain, nonatomic) NSString *partnerId;
@property (retain, nonatomic) NSString *prepayId;
@property (retain, nonatomic) NSString *nonceStr;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *sign;

- (void).cxx_destruct;

@end
