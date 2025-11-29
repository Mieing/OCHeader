@class NSString, NSMutableArray;

@interface AdminPrivilegeGroup : IESLivePBBaseMessage

@property (nonatomic) long long groupId;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSMutableArray *privilegesArray;
@property (readonly, nonatomic) unsigned long long privilegesArray_Count;

+ (id)descriptor;

@end
