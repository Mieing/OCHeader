@class BaseRequest, NSString;

@interface CgiUnionTransferPlaceOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *receiverWwUsername;
@property (retain, nonatomic) NSString *roomid;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *placeorderReserves;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int descHasAddress;
@property (retain, nonatomic) NSString *receiverEnterpriseName;
@property (retain, nonatomic) NSString *receiverStaffName;

+ (void)initialize;

@end
