@class NSString, HTSLiveUser;

@interface HTSLiveLinkmicGuestLinkUser : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long score;
@property (nonatomic) int userRole;
@property (nonatomic) int audienceLinkmicRole;
@property (copy, nonatomic) NSString *scoreStr;
@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (nonatomic) long long isBackground;

+ (id)descriptor;

@end
