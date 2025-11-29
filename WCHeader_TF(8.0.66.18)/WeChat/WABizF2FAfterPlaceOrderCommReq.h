@class NSString;

@interface WABizF2FAfterPlaceOrderCommReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *personalpayOrderId;
@property (retain, nonatomic) NSString *transId;
@property (nonatomic) unsigned int totalAmount;
@property (retain, nonatomic) NSString *placeorderExt;

+ (void)initialize;

@end
