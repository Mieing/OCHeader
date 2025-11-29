@class NSString, NSMutableArray;

@interface VisibleListData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int total;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) int relationType;
@property (retain, nonatomic) NSMutableArray *memoryGroupsArray;
@property (readonly, nonatomic) unsigned long long memoryGroupsArray_Count;

+ (id)descriptor;

@end
