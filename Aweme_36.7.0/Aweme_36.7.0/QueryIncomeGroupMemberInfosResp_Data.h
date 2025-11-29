@class NSMutableArray;

@interface QueryIncomeGroupMemberInfosResp_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *membersArray;
@property (readonly, nonatomic) unsigned long long membersArray_Count;

+ (id)descriptor;

@end
