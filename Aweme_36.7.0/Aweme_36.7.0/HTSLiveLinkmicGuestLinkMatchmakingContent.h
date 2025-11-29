@class NSMutableArray;

@interface HTSLiveLinkmicGuestLinkMatchmakingContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *matchmakingUsersArray;
@property (readonly, nonatomic) unsigned long long matchmakingUsersArray_Count;
@property (nonatomic) int userRole;
@property (nonatomic) long long callDuration;
@property (nonatomic) long long linkThreshold;

+ (id)descriptor;

@end
