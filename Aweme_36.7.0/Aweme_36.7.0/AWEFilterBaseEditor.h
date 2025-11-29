@class NSArray, NSString;
@protocol AEKEditorMaterial, AEKFilterContainerConvertible, AEKFilterOperator;

@interface AWEFilterBaseEditor : AEKBaseRenderEditor <AEKFilterEditor>

@property (retain, nonatomic) id<AEKFilterContainerConvertible> filterContainer;
@property (retain, nonatomic) id<AEKEditorMaterial> material;
@property (readonly, nonatomic) NSArray *filters;
@property (readonly, nonatomic) id<AEKFilterOperator> firstOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applyStashes:(id)a0;
- (id)filterEditorForMaterial:(id)a0;
- (id)addFilterWithResource:(id)a0;
- (id)filterImpls;
- (id)aek_filterEditorForMaterial:(id)a0;
- (id)filterWithID:(id)a0;
- (id)stashWithFilter:(id /* block */)a0;
- (BOOL)hasFilterWithID:(id)a0;
- (BOOL)hasFilterUsingUmpire:(id /* block */)a0;
- (id)initWithMaterial:(id)a0 baseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3 supportTypes:(id)a4;
- (id)addEmptyFilter:(unsigned long long)a0 detailType:(long long)a1;
- (void)updateFilter:(id)a0 resource:(id)a1;
- (void).cxx_destruct;
- (id)batch:(id /* block */)a0;

@end
