@class NSString, HTSLiveCommon;

@interface HTSLiveBattleMatchCancelMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *toUserId;
@property (nonatomic) long long cancelType;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *clientAttachedInfo;

+ (id)descriptor;

@end
