@protocol RTVMultipleDelegateInterface, RTVCompactStateDelegate;

@interface RTVCompactState : NSObject

@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVCompactStateDelegate> delegates;
@property (readonly, nonatomic) unsigned long long type;

+ (id)stateWithType:(unsigned long long)a0;

- (void)willEnterStateWithTransition:(id)a0;
- (void)didEnterStateWithTransition:(id)a0;
- (void)willExitStateWithTransition:(id)a0;
- (void)didExitStateWithTransition:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;

@end
