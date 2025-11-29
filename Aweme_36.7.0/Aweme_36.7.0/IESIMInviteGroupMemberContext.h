@class NSString, NSNumber, NSDictionary;

@interface IESIMInviteGroupMemberContext : NSObject

@property (copy, nonatomic) NSString *inviteEnterMethod;
@property (nonatomic) long long defaultSelectCount;
@property (nonatomic) BOOL enableDefaultSelect;
@property (copy, nonatomic) NSNumber *sourceType;
@property (copy, nonatomic) NSString *trackExtraParam;
@property (nonatomic) BOOL shouldStickOnTopUser;
@property (nonatomic) BOOL canShowInnerPush;
@property (nonatomic) BOOL noNeedQQInvite;
@property (nonatomic) BOOL noNeedWeChatInvite;
@property (copy, nonatomic) NSDictionary *paramDict;

+ (id)instanceWithParamDict:(id)a0;

- (id)initWithParamDict:(id)a0;
- (void).cxx_destruct;

@end
