@class NSString;

@interface HTSLiveGuestBattleFinishContent : IESLivePBBaseMessage

@property (nonatomic) int reason;
@property (copy, nonatomic) NSString *finishUserId;

+ (id)descriptor;

@end
