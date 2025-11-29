@class HTSLiveIncrementStrategies, NSMutableArray;

@interface HTSLiveStrategyInfo : IESLivePBBaseMessage <NSMutableCopying>

@property (retain, nonatomic) HTSLiveIncrementStrategies *incrementStrategies;
@property (nonatomic) BOOL hasIncrementStrategies;
@property (retain, nonatomic) NSMutableArray *fullStrategiesArray;
@property (readonly, nonatomic) unsigned long long fullStrategiesArray_Count;
@property (nonatomic) int responseType;

+ (id)descriptor;

- (int)responseType;
- (id)fullStrategiesArray;
- (id)dictionaryWtihStrategyInfo;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
