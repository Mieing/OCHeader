@class NSString;

@interface AdminPrivilege : IESLivePBBaseMessage

@property (nonatomic) int privilegeId;
@property (copy, nonatomic) NSString *privilegeName;
@property (nonatomic) int privilegeStatus;
@property (copy, nonatomic) NSString *privilegeDesc;
@property (copy, nonatomic) NSString *privilegeDetailPage;

+ (id)descriptor;

@end
