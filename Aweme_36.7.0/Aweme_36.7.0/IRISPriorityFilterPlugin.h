@class NSString, IRISConcurrentWrapper, IRISDataMechanismManager;

@interface IRISPriorityFilterPlugin : NSObject <IRISDataFilter> {
    IRISConcurrentWrapper *filterList;
    IRISConcurrentWrapper *supportedTypes;
}

@property (weak, nonatomic) IRISDataMechanismManager *mechanismManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onConfigurationUpdated:(id)a0;
- (BOOL)dataFiltering:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)isEventHit:(id)a0 type:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
