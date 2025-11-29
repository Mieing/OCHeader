@class NSString;

@interface AWEYAPTransferAccountsCreateOrderModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *bizMsg;
@property (copy, nonatomic) NSString *yapCashDeskInfo;
@property (copy, nonatomic) NSString *verificationInfo;
@property (copy, nonatomic) NSString *yapMode;
@property (copy, nonatomic) NSString *yapManageUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
