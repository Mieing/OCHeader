@class NSString, NSMutableArray;

@interface CreateInfoResponse_GroupConfig : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *initialIdentifier;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSMutableArray *configItemsArray;
@property (readonly, nonatomic) unsigned long long configItemsArray_Count;

+ (id)descriptor;

@end
