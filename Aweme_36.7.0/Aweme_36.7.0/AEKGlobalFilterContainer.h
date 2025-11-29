@class NSArray, NLEModel_OC, NSString;

@interface AEKGlobalFilterContainer : NSObject <AEKFilterContainerConvertible>

@property (retain, nonatomic) NLEModel_OC *nleModel;
@property (retain, nonatomic) NSArray *filterTypes;
@property (readonly, nonatomic) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addFilterWithType:(unsigned long long)a0 detailType:(long long)a1;
- (void)addFilterWithFilter:(id)a0;
- (id)filterImpls;
- (id)initWithModel:(id)a0 supportTypes:(id)a1;
- (void).cxx_destruct;
- (void)removeFilter:(id)a0;

@end
