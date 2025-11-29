@class NSString, UIView, NSObject, UIViewController;
@protocol AWEFeedGoodsElementProtocol, AWEECGoodsCardDataControllerProtocol, AWEECPopoverContainerProtocol;

@interface AWEPlayInteractionGoodsCardElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEFeedGoodsElementProtocol> *goodsCardView;
@property (retain, nonatomic) NSObject<AWEECGoodsCardDataControllerProtocol> *goodsCardDataController;
@property (retain, nonatomic) UIViewController<AWEECPopoverContainerProtocol> *popoverContainerVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (void)setAppear:(BOOL)a0;
- (void)showGoodsPanel;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)trackProductEntranceClick;
- (void)trackProductEntranceShow;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
