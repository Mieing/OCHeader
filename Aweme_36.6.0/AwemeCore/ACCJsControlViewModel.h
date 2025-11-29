@class NSString, NSDictionary, UIView, NSMutableArray;
@protocol AnnieXContainerBaseProtocol, BDXResourceProtocol;

@interface ACCJsControlViewModel : NSObject <BDXContainerLifecycleProtocol, BDXKitViewLifecycleProtocol, ACCJsControlService> {
    NSDictionary *_setupInfo;
    id<BDXResourceProtocol> _resource;
}

@property (retain, nonatomic) NSMutableArray *stashEvents;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *jsControl;
@property (nonatomic) BOOL isReady;
@property (copy, nonatomic) NSString *customUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)view:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)view:(id)a0 onSetUp:(id)a1;
- (void)subscribeEventNamed:(id)a0 withSubscriber:(id /* block */)a1;
- (void)setupAnnieXWithUrl:(id)a0 bid:(id)a1;
- (void)JSControlReady:(id)a0;
- (void)trackAnnieXLoadInfo;
- (void).cxx_destruct;
- (id)init;

@end
