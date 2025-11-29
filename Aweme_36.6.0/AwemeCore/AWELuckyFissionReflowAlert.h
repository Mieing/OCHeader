@class NSString, UIViewController;
@protocol BDXContainerProtocol;

@interface AWELuckyFissionReflowAlert : NSObject <BDXContainerLifecycleProtocol, AWEAlertProtocol>

@property (copy, nonatomic) NSString *popupUrl;
@property (retain, nonatomic) UIViewController<BDXContainerProtocol> *popupVC;
@property (copy, nonatomic) id /* block */ closeCallback;
@property (nonatomic) BOOL hasShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerWillDestory:(id)a0;
- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)containerDidClose:(id)a0;
- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;
- (id)initWithUrl:(id)a0;

@end
