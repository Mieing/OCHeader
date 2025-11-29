@class NSMutableArray;

@interface HTSLiveLargeMatchBizExtra : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (nonatomic) long long matchType;

+ (id)descriptor;

@end
