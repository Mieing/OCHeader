@class AWEEcommerceSearchTabVCConfigModel;

@interface AWEEcommerceSearchListTabViewController : AWESearchDoubleColumnMerchandiseViewController

@property (retain, nonatomic) AWEEcommerceSearchTabVCConfigModel *vcConfigModel;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)tabConfig;
- (id)getEnterFromSource;
- (BOOL)hideFooter;
- (BOOL)showFeedLynx;
- (id)customeSearchChannel;
- (id)getDefaultSearchType;
- (id)getEcommerceSubtabName;
- (id)pageBackgroundColor;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
