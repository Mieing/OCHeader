@class NSArray;

@interface AWEFansPushReverseUrgeRewardConfig : NSObject

@property (nonatomic) BOOL validConfig;
@property (nonatomic) unsigned long long urgeCount;
@property (nonatomic) unsigned long long giftCount;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSArray *rewardGiftsArray;

- (void).cxx_destruct;

@end
