@class NSString;

@interface DeleteGroupMembersReq : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *memberIds;
@property (nonatomic) int groupLiveType;

+ (id)descriptor;

@end
