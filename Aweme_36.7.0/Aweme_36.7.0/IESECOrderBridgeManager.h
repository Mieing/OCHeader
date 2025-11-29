@class NSDate, NSString, NSDictionary, IESECOrderQualityMonitor, UIView, IESECOrderListBridgeModel, UIViewController;
@protocol IESHYContainerProtocol;

@interface IESECOrderBridgeManager : NSObject <IESHYHybridViewLifecycleProtocol> {
    NSDate *_bridgeLynxStartTime;
}

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *bridgeUseLynxView;
@property (nonatomic) BOOL lynxViewLoaded;
@property (retain, nonatomic) NSString *cacehedEventName;
@property (retain, nonatomic) NSDictionary *cacehedParams;
@property (retain, nonatomic) NSString *bridgeLynxURL;
@property (weak, nonatomic) UIViewController *targetViewController;
@property (retain, nonatomic) IESECOrderQualityMonitor *qualityMonitor;
@property (retain, nonatomic) IESECOrderListBridgeModel *callbackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)loadLynxView;
- (void)subscribeXBridgeEvent;
- (void).cxx_destruct;

@end
