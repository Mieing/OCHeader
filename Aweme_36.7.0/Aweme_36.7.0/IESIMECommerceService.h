@class NSString;
@protocol AWEECModuleService;

@interface IESIMECommerceService : HTSService <IESIMECommerceService>

@property (retain, nonatomic) id<AWEECModuleService> innerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)available:(id /* block */)a0 unavailable:(id /* block */)a1;
- (id)createLiveFloatOnTopManagerPlayOnViewController:(id)a0;
- (BOOL)shouldShowShoppingEntranceForAweme:(id)a0;
- (BOOL)hasHomePageMallTab;
- (void)openGrantCouponPanelOnView:(id)a0 withParams:(id)a1 grantHandler:(id /* block */)a2;
- (id)getFriendTag:(id)a0;
- (id)productEntranceCommonParamsFromAweme:(id)a0;
- (id)awemeModelShareBcmInfo:(id)a0;
- (id)getContainerViewFromFloatingLiveView:(id)a0;
- (void)setTapAction:(id /* block */)a0 toFloatingLiveView:(id)a1;
- (void)attachWithFloatingLiveView:(id)a0;
- (void)detachWithFloatingLiveView:(id)a0;
- (void)muteLive:(BOOL)a0 withFloatingLiveView:(id)a1;
- (void).cxx_destruct;

@end
