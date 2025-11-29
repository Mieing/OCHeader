@class IESECLLDCLynxManager, IESECCollectionViewSectionColumnLayout, NSString, IESECGoodsDetailPageViewProvider, IESECGoodsDetailSKUManager, IESECGoodsDetailPageBaseViewModel;

@interface IESECGoodsDetailBaseSectionController : IGListSectionController <IESECCollectionViewSectionLayoutProtocol>

@property (retain, nonatomic) IESECCollectionViewSectionColumnLayout *sectionLayout;
@property (retain, nonatomic) IESECGoodsDetailPageBaseViewModel *viewModel;
@property (retain, nonatomic) IESECGoodsDetailPageViewProvider *viewProvider;
@property (weak, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (weak, nonatomic) IESECGoodsDetailSKUManager *skuManager;
@property (nonatomic) BOOL ignoreReloadView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateToObject:(id)a0;
- (id)initWithLynxManager:(id)a0;
- (void)reloadWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
