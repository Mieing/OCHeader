@class UIViewController, AWEBDARifleView, NSString, AWEAwemeModel, AWEBDARifleViewConfiguration, AWEOriginalAdModel, AWEBDARifleViewPopupContainer;
@protocol BDXPopupContainerProtocol, AWEBDARifleViewPopupEventProtocol, AWEBDARifleViewDelegate;

@interface AWEBDARifleViewPopupOpener : NSObject <BDXPopupContentServiceProtocol, BDXContainerLifecycleProtocol, AWEBDARifleViewPopupOpener>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (retain, nonatomic) AWEBDARifleViewConfiguration *config;
@property (weak, nonatomic) AWEBDARifleViewPopupContainer *containerView;
@property (weak, nonatomic) UIViewController<BDXPopupContainerProtocol> *popupViewController;
@property (weak, nonatomic) id<AWEBDARifleViewPopupEventProtocol> popupEventDelegate;
@property (weak, nonatomic) id<AWEBDARifleViewDelegate> lifecycleDelegate;
@property (nonatomic) long long currentPopupStatus;
@property (nonatomic) BOOL isFromFeedAnchor;
@property (retain, nonatomic) AWEBDARifleView *storedRifleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAnchorRifleViewShowing;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)openBDARifleViewInPadWithURL:(id)a0 context:(id /* block */)a1;
+ (id)sharedInstance;
+ (unsigned long long)serviceType;

- (void)containerTapOnPopupMask:(id)a0;
- (id)openBDARifleViewPopupWithURL:(id)a0 context:(id /* block */)a1;
- (void)preloadRifleViewWithAweme:(id)a0 openUrl:(id)a1;
- (void)preloadReset;
- (id)viewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)preSendLynxPageRequestWithScheme:(id)a0;
- (id)openPopup:(id)a0;
- (id)maskViewFromPopupContainer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
