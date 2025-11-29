@class NSDictionary, NSString;

@interface IESGCPCGStrategyActionModel : NSObject <IESGCPLiveStrategyEventDispatcherObserver>

@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) long long min;
@property (nonatomic) long long max;
@property (nonatomic) long long dlt;
@property (retain, nonatomic) id lastFactorValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addStrategyObserver;
- (void)updateBitrateWithFactorValue:(id)a0;
- (void)strategyFactorDidUpdated:(id)a0 withFactorName:(id)a1;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
