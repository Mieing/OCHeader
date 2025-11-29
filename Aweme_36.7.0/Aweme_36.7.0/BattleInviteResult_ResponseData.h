@class NSString;

@interface BattleInviteResult_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *eventTrackingInfo;
@property (copy, nonatomic) NSString *notInviteReason;

+ (id)descriptor;

@end
