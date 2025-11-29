@class NSString;

@interface EliminateGroupMemberReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *memberId;
@property (copy, nonatomic) NSString *roomId;

+ (id)descriptor;

@end
