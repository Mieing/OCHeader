@class NSString, NSMutableArray;

@interface LotteryInfoRedisCache_Condition : IESLivePBBaseMessage

@property (nonatomic) long long conditionId;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *description_p;
@property (nonatomic) int needDiamondCount;
@property (nonatomic) int fansClubLevel;
@property (copy, nonatomic) NSString *remarks;
@property (copy, nonatomic) NSString *bizInfo;
@property (retain, nonatomic) NSMutableArray *filterKeyArray;
@property (readonly, nonatomic) unsigned long long filterKeyArray_Count;

+ (id)descriptor;

@end
