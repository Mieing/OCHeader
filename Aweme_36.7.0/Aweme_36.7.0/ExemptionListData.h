@class NSMutableArray;

@interface ExemptionListData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;

+ (id)descriptor;

@end
