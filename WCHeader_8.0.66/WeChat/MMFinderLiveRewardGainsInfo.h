@class WCFinderContact, FinderLiveContact;

@interface MMFinderLiveRewardGainsInfo : NSObject

@property (retain, nonatomic) FinderLiveContact *liveContact;
@property (retain, nonatomic) WCFinderContact *refContact;
@property (nonatomic) unsigned long long rewardTime;
@property (nonatomic) unsigned int rewardTotalAmountInWecoin;

+ (id)tranferToLiveRewardGainsInfo:(id)a0;

- (id)initWithPBRewardGainsInfo:(id)a0;
- (void)copyFromPBRewardGainsInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
