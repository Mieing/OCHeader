@class NSString, NSMutableArray;

@interface HTSLiveItemBubbleInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *showPath;
@property (copy, nonatomic) NSString *showItemId;
@property (retain, nonatomic) NSMutableArray *bubblesArray;
@property (readonly, nonatomic) unsigned long long bubblesArray_Count;

+ (id)descriptor;

@end
