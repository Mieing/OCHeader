@class NSString, HTSLiveCommon, HTSLiveUser;

@interface HTSLiveRoomChannelAccessMessage : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *localTipText;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveUser *inviter;
@property (nonatomic) BOOL hasInviter;
@property (nonatomic) long long type;

+ (id)descriptor;

@end
