@class HTSLiveChestCardResource, NSMutableArray, NSString;

@interface HTSLiveChestOpenedInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *winningUsersArray;
@property (readonly, nonatomic) unsigned long long winningUsersArray_Count;
@property (retain, nonatomic) HTSLiveChestCardResource *thanksCardResource;
@property (nonatomic) BOOL hasThanksCardResource;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
