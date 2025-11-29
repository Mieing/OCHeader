@class NSString;
@protocol AEKMegaEditor;

@interface ACCEditVideoFilterApplyServiceImpl : NSObject <ACCEditVideoFilterApplyServiceProtocol>

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resourceWithFilter:(id)a0 indensity:(double)a1;
- (id)resourceWithFilterData:(id)a0;
- (double)indensityWithFilter:(id)a0;
- (id)addFilterToMaterial:(id)a0 resource:(id)a1;
- (void)updateAllFilterEnable:(BOOL)a0;
- (id)mainVideoClipMaterialWithId:(id)a0;
- (void)clearAllFilter;
- (void)clearFilterWithMaterial:(id)a0;
- (id)addFilterToMaterial:(id)a0 resource:(id)a1 megaEditor:(id)a2;
- (id)mainVideoClipMaterialWithId:(id)a0 megaEditor:(id)a1;
- (void)clearAllFilterWithMegaEditor:(id)a0;
- (void)clearFilterWithMaterial:(id)a0 megaEditor:(id)a1;
- (id)initWithMegaEditor:(id)a0;
- (void)updateFilterEnable:(BOOL)a0 material:(id)a1;
- (void)clearFilterOnNLEModel;
- (void)clearFilterOnNLEModelWithMegaEditor:(id)a0;
- (void).cxx_destruct;

@end
