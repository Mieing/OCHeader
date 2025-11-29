@class NSMutableArray;

@interface HTSLiveGuestBattleContributors : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;

+ (id)descriptor;

@end
