@class NSString, EcsOrderFinderSecInfo, EcsClientInfo, EcsGiverAddressInfo;

@interface EcsPresentSubOrder : WXPBGeneratedMessage

@property (nonatomic) unsigned long long bizuin;
@property (nonatomic) unsigned long long orderId;
@property (nonatomic) unsigned long long receiverUseruin;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned long long acceptPresentTime;
@property (retain, nonatomic) NSString *receiverUserName;
@property (retain, nonatomic) NSString *hashCode;
@property (retain, nonatomic) EcsOrderFinderSecInfo *acceptSecInfo;
@property (retain, nonatomic) EcsClientInfo *receiverClientInfo;
@property (nonatomic) unsigned int originalStatus;
@property (nonatomic) unsigned int receiveExpiredTime;
@property (nonatomic) unsigned int subOrderIndex;
@property (nonatomic) unsigned int takeTime;
@property (nonatomic) unsigned int acceptVersion;
@property (nonatomic) unsigned long long receiverSendThanksTime;
@property (nonatomic) unsigned int refundResult;
@property (nonatomic) unsigned int winLotteryIndex;
@property (retain, nonatomic) EcsGiverAddressInfo *giverAddressInfo;

+ (void)initialize;

@end
