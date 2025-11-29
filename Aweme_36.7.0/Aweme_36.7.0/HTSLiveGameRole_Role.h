@class NSString;

@interface HTSLiveGameRole_Role : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *gameUserId;
@property (copy, nonatomic) NSString *roleId;
@property (copy, nonatomic) NSString *roleName;
@property (copy, nonatomic) NSString *roleLevel;
@property (copy, nonatomic) NSString *roleRegion;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *accountType;

+ (id)descriptor;

@end
