@class NSMutableArray;

@interface AnchorDisplayStrategyV2 : GPBMessage

@property (nonatomic) int descSuffixStrategy;
@property (nonatomic) BOOL hasDescSuffixStrategy;
@property (retain, nonatomic) NSMutableArray *displayControlInfoArray;
@property (readonly, nonatomic) unsigned long long displayControlInfoArray_Count;

+ (id)descriptor;

- (id)displayControlInfoArray;
- (int)descSuffixStrategy;

@end
