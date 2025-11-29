@class NSArray;

@interface MMFinderLiveRewardLevelConfigs : NSObject

@property (retain, nonatomic) NSArray *currentGiftPackageMetaGiftLists;
@property (retain, nonatomic) NSArray *totalLevelConfigList;
@property (retain, nonatomic) NSArray *currentLevelConfigList;
@property (nonatomic) unsigned long long limitConsumeWecoin;
@property (nonatomic) unsigned long long limitChooseProduct;

+ (id)GetBackgroundColorWithRank:(unsigned int)a0;
+ (id)GetSignIconWithRank:(unsigned int)a0 iconSize:(double)a1;
+ (unsigned int)GetSelfMinPurchaseTargetLevel;

- (id)initWithProductMetaList:(id)a0 levelConfigList:(id)a1 limitConsumeWecoin:(unsigned long long)a2 limitChooseProduct:(unsigned long long)a3;
- (unsigned int)getTotalWecoinWithTargetRank:(unsigned int)a0;
- (long long)selectedLevelIndexWithTargetRank:(unsigned int)a0;
- (void).cxx_destruct;

@end
