@class NSString;

@interface EditGroupMemberNameReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *memberId;
@property (copy, nonatomic) NSString *name;

+ (id)descriptor;

@end
