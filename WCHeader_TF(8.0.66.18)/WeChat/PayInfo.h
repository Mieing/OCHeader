@class NSString;

@interface PayInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long orderPayCreateTime;
@property (nonatomic) unsigned long long orderPayTime;
@property (retain, nonatomic) NSString *payMethod;
@property (retain, nonatomic) NSString *transId;
@property (nonatomic) unsigned int payType;
@property (nonatomic) unsigned long long payAmount;

+ (void)initialize;

@end
