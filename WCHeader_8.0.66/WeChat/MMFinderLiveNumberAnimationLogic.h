@class NSPointerArray, FinderLiveNumericAnimationRuleInfo;

@interface MMFinderLiveNumberAnimationLogic : NSObject

@property (retain, nonatomic) NSPointerArray *observers;
@property (nonatomic) BOOL hasStarted;
@property (nonatomic) BOOL hasFinished;
@property (nonatomic) unsigned long long productID;
@property (nonatomic) unsigned long long currentNumber;
@property (retain, nonatomic) FinderLiveNumericAnimationRuleInfo *ruleInfo;

- (id)initWithLocalValue:(unsigned long long)a0 ruleInfo:(id)a1 ForProductID:(unsigned long long)a2;
- (BOOL)start;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;

@end
