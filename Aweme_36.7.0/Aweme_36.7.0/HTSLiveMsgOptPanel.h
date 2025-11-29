@class NSMutableArray;

@interface HTSLiveMsgOptPanel : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *itemListArray;
@property (readonly, nonatomic) unsigned long long itemListArray_Count;

+ (id)descriptor;

@end
