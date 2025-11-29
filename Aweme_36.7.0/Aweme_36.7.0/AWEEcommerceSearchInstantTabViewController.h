@class BDXBridgeEventSubscriber, AWEEcommerceSearchTabVCConfigModel;

@interface AWEEcommerceSearchInstantTabViewController : AWESearchDoubleColumnMerchandiseViewController

@property (retain, nonatomic) BDXBridgeEventSubscriber *updateAddressSubscriber;
@property (retain, nonatomic) AWEEcommerceSearchTabVCConfigModel *vcConfigModel;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)tabConfig;
- (id)getEnterFromSource;
- (id)customeSearchChannel;
- (id)getDefaultSearchType;
- (id)getEcommerceSubtabName;
- (id)pageBackgroundColor;
- (void)setupUpdateAddressSubscriber;
- (void)addGradientBackgroundLayer;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;

@end
