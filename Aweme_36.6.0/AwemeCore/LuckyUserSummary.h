@class NSMutableArray;

@interface LuckyUserSummary : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long itemsArray_Count;

+ (id)descriptor;

@end
