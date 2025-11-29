@class NSString, NSDictionary, BDXBridgeEventSubscriber, AWESearchHomePageInspirationView, AWESearchInspirationDataController, AWEDynamicPatchModel;
@protocol AWESearchDynamicEngineEventProtocol, AWESearchDynamicEngineProtocol, AWESearchHomePageInspirationProtocol;

@interface AWESearchHomePageInspirationViewController : NSObject <AWESearchDynamicEngineDelegate, AWESearchHomePageInspirationViewDelegate>

@property (retain, nonatomic) id<AWESearchDynamicEngineProtocol, AWESearchDynamicEngineEventProtocol> engine;
@property (retain, nonatomic) AWEDynamicPatchModel *model;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) AWESearchInspirationDataController *dataController;
@property (retain, nonatomic) NSDictionary *preRequestResponse;
@property (copy, nonatomic) NSString *searchScene;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWESearchHomePageInspirationProtocol> delegate;
@property (retain, nonatomic) AWESearchHomePageInspirationView *view;
@property (copy, nonatomic) id /* block */ suggestFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)themeDidChange:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)lynxEngine:(id)a0 didFailLoadWithError:(id)a1;
- (void)lynxEngine:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)dismissPanelView;
- (void)updatePatchModelWithScene:(id)a0 previousPage:(id)a1;
- (void)notifyInspirationOpenWithIspirationVtagEnable:(BOOL)a0 awemeId:(id)a1;
- (void)notifyInspirationCloseWithReason:(id)a0;
- (void)prefetchInspirationDataWithPage:(id)a0;
- (void)dismissInspiration;
- (void)dismissInspirationWithParams:(id)a0;
- (void)notifyInspirationClose;
- (void)handleJSBCloseNotification:(id)a0;
- (id)createPatchModelWithScene:(id)a0 previousPage:(id)a1;
- (void)registerCloseCallBack;
- (id)inspirationOptData;
- (void)sendPreRequestResponseWithCompletion:(id /* block */)a0;
- (void)dismissInspirationWithReason:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;
- (void)setupNotifications;

@end
