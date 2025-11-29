@class NSString, NSMutableArray;

@interface UserListArea : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *emptyText;
@property (retain, nonatomic) NSMutableArray *userInfosArray;
@property (readonly, nonatomic) unsigned long long userInfosArray_Count;

+ (id)descriptor;

@end
