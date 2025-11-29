@class NSMutableArray;

@interface ShareListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (retain, nonatomic) NSMutableArray *groupsArray;
@property (readonly, nonatomic) unsigned long long groupsArray_Count;

+ (id)descriptor;

@end
