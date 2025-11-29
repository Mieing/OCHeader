@class NSString;

@interface AWEIMDouyinRedPacketYapmentInfoModel : AWEBaseApiModel

@property (nonatomic) long long amount;
@property (nonatomic) long long singleAmount;
@property (nonatomic) long long count;
@property (nonatomic) long long receiveCount;
@property (nonatomic) unsigned long long redPacketType;
@property (nonatomic) unsigned long long redPacketSubtype;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *yapmentUrl;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *redPacketId;
@property (copy, nonatomic) NSString *yapUrlType;
@property (copy, nonatomic) NSString *clientMessageId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
