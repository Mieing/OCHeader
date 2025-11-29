@class NSArray, NLEProcessUnit;

@interface NLEProcessQueue : NSObject

@property (retain, nonatomic) NLEProcessUnit *curUnit;
@property (retain, nonatomic) NLEProcessUnit *tailUnit;
@property (readonly, copy, nonatomic) NSArray *units;

- (void)addAsyncUnitWithBlock:(id /* block */)a0;
- (void)addSyncUnitWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (void)runWithCompletion:(id /* block */)a0;

@end
