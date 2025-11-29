@class NSArray, NSString, EmotionReward;

@interface EmotionRewardResponseInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *prices;
@property (nonatomic) unsigned int donorNum;
@property (retain, nonatomic) NSArray *donors;
@property (retain, nonatomic) EmotionReward *reward;
@property (nonatomic) BOOL hasAllInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_prices;
+ (void)PBArrayAdd_donorNum;
+ (void)PBArrayAdd_donors;
+ (void)PBArrayAdd_reward;
+ (void)PBArrayAdd_hasAllInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
