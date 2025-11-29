@class NSString;

@interface FinderLiveBattleInfo_QuestProgress : WXPBGeneratedMessage

@property (nonatomic) unsigned int targetType;
@property (nonatomic) unsigned long long targetNum;
@property (nonatomic) unsigned long long currentNum;
@property (retain, nonatomic) NSString *giftProductId;

+ (void)initialize;

@end
