@class NSNumber, NSString, NSDictionary;

@interface IESLiveRevenueInteractLynxPlayModel : IESLiveRevenueInteractLynxModel

@property (retain, nonatomic) NSNumber *channelID;
@property (copy, nonatomic) NSString *channelIDStr;
@property (copy, nonatomic) NSString *pkAudienceCount;
@property (copy, nonatomic) NSString *userInfos;
@property (nonatomic) long long skinType;
@property (copy, nonatomic) NSString *skinConfig;
@property (copy, nonatomic) NSString *battleArmies;
@property (copy, nonatomic) NSString *battleSettings;
@property (copy, nonatomic) NSString *pkStatus;
@property (nonatomic) double remainTime;
@property (nonatomic) long long pkResult;
@property (copy, nonatomic) NSString *teamTask;
@property (nonatomic) BOOL cleanScreen;
@property (copy, nonatomic) NSString *lynxData;
@property (copy, nonatomic) NSString *leftMvp;
@property (copy, nonatomic) NSString *rightMvp;
@property (copy, nonatomic) NSString *pkPropCardInfo;
@property (copy, nonatomic) NSString *pkScore;
@property (copy, nonatomic) NSString *pkUserInfo;
@property (copy, nonatomic) NSString *pkTeamInfo;
@property (nonatomic) long long survivalStageIndex;
@property (copy, nonatomic) NSString *metaData;
@property (readonly, copy, nonatomic) NSDictionary *playStatus;
@property (readonly, nonatomic) long long gameStatus;
@property (readonly, copy, nonatomic) NSDictionary *gameExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)lynxStatus;
- (id)encodeBattleArmyToJson:(id)a0;
- (id)encodePKScoreToJson:(id)a0 breakthroughInfo:(id)a1;
- (void).cxx_destruct;

@end
