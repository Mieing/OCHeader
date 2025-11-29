@class NSString, NSMutableDictionary, UIView;
@protocol AWEHttpTask, AWEECLabelActionProtocol;

@interface AWEPlayInteractionECommerceEntryElement : AWEPlayInteractionLeftElement <AWEPlayInteractionComponentGlobalPriorityComponentProtocol, AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEECLabelActionProtocol> *ecommerceEntryView;
@property (weak, nonatomic) id<AWEHttpTask> routeUrlRequestTask;
@property (retain, nonatomic) NSString *routeUrl;
@property (retain, nonatomic) NSMutableDictionary *routeUrlData;
@property (nonatomic) double entryClickTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)enableComponentHideCtrl;
+ (BOOL)shouldHideShopEntryForRecWith:(id)a0 context:(id)a1;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (void)videoPlayerWillTrackPlayTime;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)setupUI:(BOOL)a0;
- (id)goodsTrackObject:(unsigned long long)a0;
- (BOOL)getUpdateAddressSettings;
- (void)updateAddressWithShopId:(id)a0;
- (void)adClickTrack;
- (void)schemaUpdateClickTrack;
- (void)trackECommerceEntryAppear;
- (void)trackStoreDetailStayTime;
- (void)updateRouteSchemaWithStoreId:(id)a0 shopId:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
