@class NSString;

@interface BindGroupMembersReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *memberIds;
@property (nonatomic) int groupLiveType;

+ (id)descriptor;

@end
