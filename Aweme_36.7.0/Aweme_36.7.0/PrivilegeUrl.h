@class NSString;

@interface PrivilegeUrl : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *privilegePanelSchema;
@property (copy, nonatomic) NSString *privilegeCardSchema;
@property (copy, nonatomic) NSString *prepayCashierJumpURL;

+ (id)descriptor;

@end
