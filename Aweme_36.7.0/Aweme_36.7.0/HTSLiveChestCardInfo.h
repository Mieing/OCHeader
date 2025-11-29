@class HTSLiveChestCardResource, NSString, HTSLiveChestCardBonusInfo, HTSLiveChestCardEffectTask;

@interface HTSLiveChestCardInfo : IESLivePBBaseMessage

@property (nonatomic) long long cardInstId;
@property (nonatomic) long long cardId;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) NSString *cardDesc;
@property (nonatomic) int useType;
@property (nonatomic) int effectType;
@property (retain, nonatomic) HTSLiveChestCardEffectTask *effectTask;
@property (nonatomic) BOOL hasEffectTask;
@property (retain, nonatomic) HTSLiveChestCardResource *resource;
@property (nonatomic) BOOL hasResource;
@property (retain, nonatomic) HTSLiveChestCardBonusInfo *bonusInfo;
@property (nonatomic) BOOL hasBonusInfo;
@property (nonatomic) long long getTime;
@property (nonatomic) long long unuseExpireTime;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *showContent;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
