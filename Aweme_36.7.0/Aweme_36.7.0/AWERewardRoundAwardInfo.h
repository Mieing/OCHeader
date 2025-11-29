@class NSDictionary, NSString;

@interface AWERewardRoundAwardInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long amount;
@property (nonatomic) long long nextAmount;
@property (nonatomic) long long nextRoundSecond;
@property (nonatomic) long long maxRewardLimit;
@property (nonatomic) long long walletAmount;
@property (nonatomic) long long todayRewardAmount;
@property (nonatomic) long long expectRewardTime;
@property (nonatomic) long long toastMaxRewardAmount;
@property (retain, nonatomic) NSDictionary *grandReward;
@property (nonatomic) long long grandInspireTime;
@property (nonatomic) long long grandRewardAmount;
@property (copy, nonatomic) NSString *adSession;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
