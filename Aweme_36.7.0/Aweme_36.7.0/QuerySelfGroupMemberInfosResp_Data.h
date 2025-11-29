@class NSMutableArray;

@interface QuerySelfGroupMemberInfosResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *membersArray;
@property (readonly, nonatomic) unsigned long long membersArray_Count;
@property (retain, nonatomic) NSMutableArray *offStageMembersArray;
@property (readonly, nonatomic) unsigned long long offStageMembersArray_Count;

+ (id)descriptor;

@end
