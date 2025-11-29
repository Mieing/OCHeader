@interface IESMMEffectAlgorithmBach : NSObject

@property (nonatomic) void *algoHandle;

- (void)addBachAlgorithmName:(id)a0 config:(id)a1 algoType:(unsigned long long)a2;
- (void)removeAllBachAlgorithm;
- (id)getBachAlgorithmResultWithAlgoType:(unsigned long long)a0;
- (Class)resultClassWithAlgoType:(unsigned long long)a0;
- (id)initWithAlgorithmHandle:(void *)a0;
- (int)parseBachAlgoTypeFromAlgoType:(unsigned long long)a0;

@end
