@class NSString, NSMutableArray;

@interface GroupConfigPre : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSMutableArray *configItemsArray;
@property (readonly, nonatomic) unsigned long long configItemsArray_Count;

+ (id)descriptor;

@end
