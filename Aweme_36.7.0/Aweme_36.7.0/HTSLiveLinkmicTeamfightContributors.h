@class NSMutableArray;

@interface HTSLiveLinkmicTeamfightContributors : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *userIdsArray;
@property (readonly, nonatomic) unsigned long long userIdsArray_Count;

+ (id)descriptor;

@end
