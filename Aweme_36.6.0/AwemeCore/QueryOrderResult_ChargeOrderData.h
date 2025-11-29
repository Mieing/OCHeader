@class NSString;

@interface QueryOrderResult_ChargeOrderData : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long money;
@property (nonatomic) long long createTime;

+ (id)descriptor;

@end
