@class NSMutableArray;

@interface TabConfigPre : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *normalItemsArray;
@property (readonly, nonatomic) unsigned long long normalItemsArray_Count;

+ (id)descriptor;

@end
