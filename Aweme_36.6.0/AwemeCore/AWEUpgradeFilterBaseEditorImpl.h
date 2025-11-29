@class NSArray, NSString;
@protocol AEKEditorMaterial, AEKFilterItemOperator, AEKUpgradeFilterContainerConvertible;

@interface AWEUpgradeFilterBaseEditorImpl : AEKBaseRenderEditor <AEKUpgradeFilterEditor>

@property (retain, nonatomic) id<AEKUpgradeFilterContainerConvertible> filterContainer;
@property (retain, nonatomic) id<AEKEditorMaterial> material;
@property (readonly, nonatomic) NSArray *filterSegmentDatas;
@property (readonly, nonatomic) id<AEKFilterItemOperator> firstOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filterEditorForMaterial:(id)a0;
- (id)addFilterWithResource:(id)a0;
- (id)filterWithResourcePath:(id)a0;
- (id)filterImpls;
- (id)aek_filterEditorForMaterial:(id)a0;
- (id)filterWithID:(id)a0;
- (BOOL)hasFilterWithID:(id)a0;
- (BOOL)hasFilterUsingUmpire:(id /* block */)a0;
- (id)initWithMaterial:(id)a0 baseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3 supportTypes:(id)a4;
- (id)filterSegmentImpls;
- (BOOL)isExistFilter;
- (void).cxx_destruct;
- (id)batch:(id /* block */)a0;

@end
