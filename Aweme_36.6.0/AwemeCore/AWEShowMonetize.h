@class NSString;
@protocol AWEShowMonetizeCouponService, AWEShowDataInjCacheService, AWEShowMonetizeSkinService, AWEShowAnnieXService, AWEShowMonetizeRefreshService, AWEShowMonetizeGiftTicketService, AWEShowMonetizePopupService, AWEShowMonetizeStatusCheckService;

@interface AWEShowMonetize : HTSService <HTSService, AWEShowMonetizeService>

@property (retain, nonatomic) id<AWEShowMonetizeRefreshService> refreshImpl;
@property (retain, nonatomic) id<AWEShowMonetizeStatusCheckService> statusCheckImpl;
@property (retain, nonatomic) id<AWEShowMonetizeCouponService> couponImpl;
@property (retain, nonatomic) id<AWEShowMonetizeSkinService> skinImpl;
@property (retain, nonatomic) id<AWEShowMonetizeGiftTicketService> giftTicketImpl;
@property (retain, nonatomic) id<AWEShowMonetizePopupService> popupImpl;
@property (retain, nonatomic) id<AWEShowDataInjCacheService> dataInjCacheImpl;
@property (retain, nonatomic) id<AWEShowAnnieXService> annieXImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)coupon;
- (id)dataInjCache;
- (id)anniex;
- (id)statusCheck;
- (id)skin;
- (id)giftTicket;
- (void).cxx_destruct;
- (id)refresh;
- (id)popup;

@end
