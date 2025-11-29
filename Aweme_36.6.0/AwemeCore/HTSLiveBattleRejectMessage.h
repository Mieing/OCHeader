@class NSString, HTSLiveCommon;

@interface HTSLiveBattleRejectMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long channelId;
@property (nonatomic) long long battleId;
@property (copy, nonatomic) NSString *rejectUid;
@property (copy, nonatomic) NSString *multipleAgainPrompts;
@property (nonatomic) int inviteType;

+ (id)descriptor;

@end
