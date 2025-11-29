@class BattleContributorsRankListV2, NSMutableDictionary, HTSLiveCommon, NSString, NSMutableArray;

@interface HTSLiveLinkMicArmies : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) NSMutableDictionary *userArmiesMap;
@property (readonly, nonatomic) unsigned long long userArmiesMap_Count;
@property (retain, nonatomic) NSMutableArray *userArmiesListArray;
@property (readonly, nonatomic) unsigned long long userArmiesListArray_Count;
@property (retain, nonatomic) BattleContributorsRankListV2 *rankListV2;
@property (nonatomic) BOOL hasRankListV2;
@property (copy, nonatomic) NSString *topShowText;

+ (id)descriptor;

@end
