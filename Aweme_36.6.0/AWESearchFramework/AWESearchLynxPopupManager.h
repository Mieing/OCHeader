@class AWESearchPopInfo, NSString, BDXBridgeEventSubscriber, UIView, UIViewController;
@protocol BDXContainerProtocol, BDXViewContainerProtocol;

@interface AWESearchLynxPopupManager : NSObject <BDXContainerLifecycleProtocol, BDXPopupEventProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxContainer;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) UIViewController<BDXContainerProtocol> *containerVC;
@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSString *popName;
@property (copy, nonatomic) AWESearchPopInfo *popInfo;
@property (copy, nonatomic) id /* block */ didLoadFailed;
@property (copy, nonatomic) id /* block */ containerWillDestory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillDestory:(id)a0;
- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)popupDidCloseWithContainer:(id)a0 params:(id)a1;
- (void)showLynxPopup;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
