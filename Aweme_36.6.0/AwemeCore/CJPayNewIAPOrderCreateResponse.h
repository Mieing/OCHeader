@class NSString;

@interface CJPayNewIAPOrderCreateResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *outTradeNo;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *uidEncrypt;
@property (copy, nonatomic) NSString *tradeAmount;

+ (id)keyMapper;

- (id)toNewIAPOrderCreateModel;
- (void).cxx_destruct;

@end
