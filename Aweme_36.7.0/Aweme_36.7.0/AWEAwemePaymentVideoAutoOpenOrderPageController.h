@class NSString;
@protocol AWEPaymentEventHandlerProtocol;

@interface AWEAwemePaymentVideoAutoOpenOrderPageController : AWEAwemeNewDetailBaseController <AWEPaymentEventHandlerDelegate, AWEShowMonetizePopupHandler, AWEShowMonetizePopupHandler, AWEAwemeNewDetailTableControllerProtocol>

@property (nonatomic) BOOL hasShowOrderPage;
@property (nonatomic) BOOL hasPreviewShowOrderPage;
@property (retain, nonatomic) id<AWEPaymentEventHandlerProtocol> eventHandler;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *currItemID;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) BOOL autoOpenLongVideoOrderPage;
@property (nonatomic) BOOL shouldWaitOtherPopupPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)setupEvent;
- (void)handlePayEvent:(id)a0;
- (void)popupDidStart:(id)a0;
- (void)popupDidFinish:(id)a0;
- (id)popupReceiveHandlerEventQueueName:(id)a0;
- (id)allowListSupportAutoPullOrderPage:(id)a0;
- (void)autoOpenOrderPage:(id)a0 referString:(id)a1;
- (BOOL)shouldPreventPreviewEndedAutoOpenOrderPage:(id)a0;
- (BOOL)isPreviewEndedOrNoPreview:(id)a0;
- (BOOL)shouldPreviewChargeAutoOpenOrderPage:(id)a0;
- (void)autoOpenOrderPage:(id)a0 referString:(id)a1 isPreviewAutoOpen:(BOOL)a2;
- (BOOL)lv_shouldPreviewChargeAutoOpenOrderPage:(id)a0;
- (void)openBillPageWithModel:(id)a0 referString:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldShowViewWithPeriod:(double)a0 model:(id)a1;
- (BOOL)shouldPreventAutoOpenOrderPage:(id)a0 referString:(id)a1 isPreviewAutoOpen:(BOOL)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
