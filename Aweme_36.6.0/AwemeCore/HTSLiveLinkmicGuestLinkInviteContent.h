@class NSMutableArray;

@interface HTSLiveLinkmicGuestLinkInviteContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *inviterListArray;
@property (readonly, nonatomic) unsigned long long inviterListArray_Count;
@property (nonatomic) long long callDuration;
@property (nonatomic) long long linkThreshold;

+ (id)descriptor;

@end
