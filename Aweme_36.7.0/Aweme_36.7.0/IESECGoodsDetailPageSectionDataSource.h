@class IESECLLDCLynxManager, NSString, UICollectionView, IESECGoodsDetailPageViewProvider, IESECGoodsDetailSliceManager, IESECGoodsDetailImagePreloader, IESECGoodsDetailSectionObjectManager;

@interface IESECGoodsDetailPageSectionDataSource : NSObject <IGListAdapterDataSource>

@property (retain, nonatomic) IESECGoodsDetailSectionObjectManager *sectionObjectManager;
@property (copy, nonatomic) NSString *goodsDetailPageIdentifier;
@property (retain, nonatomic) IESECGoodsDetailPageViewProvider *viewProvider;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (retain, nonatomic) IESECGoodsDetailImagePreloader *imagePreloader;
@property (retain, nonatomic) IESECGoodsDetailSliceManager *sliceManager;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (id)initWithSectionObjectManager:(id)a0;
- (void).cxx_destruct;

@end
