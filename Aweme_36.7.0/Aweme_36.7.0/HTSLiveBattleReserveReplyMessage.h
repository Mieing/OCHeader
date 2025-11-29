@class NSString, HTSLiveCommon;

@interface HTSLiveBattleReserveReplyMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long userId;
@property (nonatomic) long long roomId;
@property (nonatomic) long long inviteUserId;
@property (nonatomic) long long inviteRoomId;
@property (copy, nonatomic) NSString *clientAttachedInfo;
@property (copy, nonatomic) NSString *reserveId;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *inviteOpenId;

+ (id)descriptor;

@end
