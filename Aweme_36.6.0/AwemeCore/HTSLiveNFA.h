@class NSMutableArray;

@interface HTSLiveNFA : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *patternsArray;
@property (readonly, nonatomic) unsigned long long patternsArray_Count;
@property (retain, nonatomic) NSMutableArray *eventNamesArray;
@property (readonly, nonatomic) unsigned long long eventNamesArray_Count;
@property (nonatomic) int scope;
@property (nonatomic) int withinTime;

+ (id)descriptor;

- (int)withinTime;
- (id)patternsArray;
- (int)scope;
- (id)eventNamesArray;

@end
