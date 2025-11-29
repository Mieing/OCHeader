@class NSString;

@interface AWEYAPTransferAccountsReceiveModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *bizMsg;
@property (copy, nonatomic) NSString *yapManageUrl;
@property (copy, nonatomic) NSString *verificationInfo;
@property (nonatomic) long long amount;
@property (nonatomic) long long transferTime;
@property (nonatomic) long long refundTime;
@property (nonatomic) long long receiveTime;
@property (copy, nonatomic) NSString *refundDesc;
@property (copy, nonatomic) NSString *recvResultPageInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
