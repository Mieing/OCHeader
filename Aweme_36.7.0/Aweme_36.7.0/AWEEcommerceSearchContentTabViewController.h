@class AWEEcommerceSearchTabVCConfigModel;

@interface AWEEcommerceSearchContentTabViewController : AWESearchDoubleColumnMerchandiseViewController

@property (retain, nonatomic) AWEEcommerceSearchTabVCConfigModel *vcConfigModel;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)tabConfig;
- (id)getEnterFromSource;
- (id)currentAutoPlayConfig;
- (BOOL)showFeedLynx;
- (id)customeSearchChannel;
- (id)getDefaultSearchType;
- (id)getEcommerceSubtabName;
- (id)pageBackgroundColor;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
