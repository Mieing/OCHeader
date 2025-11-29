@class NSString, NSMutableArray;

@interface BattleArimesRanklistResult_BattleDetail : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scoreText;
@property (copy, nonatomic) NSString *likeText;
@property (copy, nonatomic) NSString *giftText;
@property (copy, nonatomic) NSString *giftUvText;
@property (copy, nonatomic) NSString *ticketText;
@property (copy, nonatomic) NSString *subscribeText;
@property (retain, nonatomic) NSMutableArray *scoreItemsArray;
@property (readonly, nonatomic) unsigned long long scoreItemsArray_Count;
@property (copy, nonatomic) NSString *subTitle;

+ (id)descriptor;

@end
