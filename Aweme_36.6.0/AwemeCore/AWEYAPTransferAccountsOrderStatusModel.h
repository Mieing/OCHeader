@class NSString, NSNumber;

@interface AWEYAPTransferAccountsOrderStatusModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *bizMsg;
@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long transferStatus;
@property (nonatomic) long long createTime;
@property (nonatomic) long long refuseTime;
@property (nonatomic) long long expireTime;
@property (nonatomic) long long succTime;
@property (copy, nonatomic) NSString *refundDesc;
@property (copy, nonatomic) NSString *userAvatar;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSNumber *userId;
@property (copy, nonatomic) NSNumber *createId;
@property (nonatomic) BOOL sendFromMe;
@property (nonatomic) BOOL isGroup;
@property (copy, nonatomic) NSNumber *targetUserId;
@property (copy, nonatomic) NSString *creatorName;
@property (copy, nonatomic) NSString *targetUserName;
@property (copy, nonatomic) NSString *teaSource;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
