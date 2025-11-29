@class NSString;

@interface VerifyWxPayReqInfo : MMObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *timeStamp;
@property (copy, nonatomic) NSString *nonceStr;
@property (copy, nonatomic) NSString *packageStr;
@property (copy, nonatomic) NSString *signType;
@property (copy, nonatomic) NSString *paySign;

- (void).cxx_destruct;

@end
