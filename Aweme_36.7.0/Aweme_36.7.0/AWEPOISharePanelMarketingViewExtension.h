@class AWEShareContext, NSString, UIView, NSMutableArray, UIViewController;
@protocol AnnieXContainerBaseProtocol, AWESharePanel;

@interface AWEPOISharePanelMarketingViewExtension : NSObject <AWESharePanelViewExtension, BDXContainerLifecycleProtocol>

@property (weak, nonatomic) AWEShareContext *context;
@property (weak, nonatomic) UIViewController<AWESharePanel> *sharePanel;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (retain, nonatomic) NSMutableArray *bridgeSubscriberList;
@property (nonatomic) BOOL hasShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerDidFirstScreen:(id)a0;
- (void)bindEvent;
- (id)logParams;
- (void)sharePanelWillAppear:(id)a0;
- (void)sharePanelDidAppear:(id)a0;
- (id)panelExtraData;
- (void)updateShareLogParams:(id)a0;
- (BOOL)isFromPOI;
- (id)updateOrigPanelData:(id)a0 logParams:(id)a1;
- (BOOL)isFromPOIGoods;
- (id)lynxInitBaseData;
- (BOOL)needRequest;
- (void)loadBulletViewWithResponse:(id)a0;
- (void)requestMarketingShareInfoWithParams:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldTrackShow;
- (void).cxx_destruct;
- (id)sessionId;
- (void)dealloc;
- (void)updateWithContext:(id)a0;
- (id)requestParams;

@end
