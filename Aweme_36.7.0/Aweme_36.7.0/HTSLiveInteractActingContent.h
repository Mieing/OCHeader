@class HTSLiveInteractActingRole, HTSLiveInteractActingGift, HTSLiveInteractActingBG;

@interface HTSLiveInteractActingContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveInteractActingBG *bg;
@property (nonatomic) BOOL hasBg;
@property (retain, nonatomic) HTSLiveInteractActingGift *gift;
@property (nonatomic) BOOL hasGift;
@property (retain, nonatomic) HTSLiveInteractActingRole *role;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) int showRoleNickName;

+ (id)descriptor;

@end
