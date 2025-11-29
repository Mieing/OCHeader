@class NSString, NSMutableDictionary, NSArray;

@interface IESLiveRevenueInteractState : NSObject

@property (nonatomic) long long value;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) BOOL isParallel;
@property (retain, nonatomic) NSMutableDictionary *transitions;
@property (copy, nonatomic) NSArray *combinedStates;
@property (copy, nonatomic) id /* block */ didEnterState;

- (void)handleEvent:(long long)a0 completion:(id /* block */)a1;
- (id)initWithStates:(id)a0 value:(long long)a1 tag:(id)a2;
- (id)initWithState:(long long)a0 tag:(id)a1;
- (void)addEvent:(long long)a0 toState:(long long)a1;
- (void)addEvent:(long long)a0 toState:(long long)a1 condition:(id /* block */)a2;
- (id)realState;
- (void).cxx_destruct;
- (BOOL)containsState:(long long)a0;

@end
