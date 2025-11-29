@class IESECLynxCardPreloaderModel, HybridLynxView, NSString, LynxExtraTiming;

@interface IESECLynxCardPreloaderTask : NSObject <HybridKitViewLifecycleProtocol, LynxTimingListener, IESECListKitCardPreloaderTask>

@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) IESECLynxCardPreloaderModel *model;
@property (retain, nonatomic) HybridLynxView *lynxView;
@property (retain, nonatomic) LynxExtraTiming *extraTiming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long state;

- (void)viewDidFirstScreen:(id)a0;
- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)lynxView:(id)a0 onSetup:(id)a1;
- (void)registerBridges;
- (void)view:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)startWithCompleteBlock:(id /* block */)a0;
- (id)parseUrlFromSchema:(id)a0;
- (void).cxx_destruct;

@end
