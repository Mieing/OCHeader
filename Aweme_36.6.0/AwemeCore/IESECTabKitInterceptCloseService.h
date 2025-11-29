@class NSString, IESECServiceProxy, IESECTabKitInterceptCloseConfig, NSMutableDictionary;
@protocol IESECTabKitStorageService, IESECTabKitEventSubscriber, IESECTabKitEventService, IESECTabKitDataService;

@interface IESECTabKitInterceptCloseService : IESECTabKitService <IESECTabKitInterceptCloseService> {
    IESECTabKitInterceptCloseConfig *_globalConfig;
    BOOL _edgePanIntercepting;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableDictionary *_configMap;
    unsigned long long _action;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitStorageService> *storageService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (copy, nonatomic) id /* block */ willCloseAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close:(id)a0 animated:(BOOL)a1;
- (void)setupInterceptClose;
- (void)enableInteractivePopIntercept:(BOOL)a0;
- (id)currentInterceptCloseConfig;
- (id)configInterceptClose:(id)a0;
- (void)ackCloseActionIntercepted;
- (void)close:(id)a0 action:(unsigned long long)a1;
- (void)close:(id)a0 action:(unsigned long long)a1 animated:(BOOL)a2;
- (void)handleBackGesturePan:(id)a0;
- (void)setupAckCloseActionInterceptedTimeoutHandler;
- (void)handleInteractivePopGestureRecognizer:(id)a0;
- (id)configForTabID:(unsigned long long)a0;
- (BOOL)shouldIntercept:(id)a0 closeAction:(unsigned long long)a1;
- (void)doInterceptCloseAction:(unsigned long long)a0;
- (void)doCloseAction:(BOOL)a0;
- (void)notifyDidInterceptCloseAction:(unsigned long long)a0;
- (void)p_notifyDidInterceptCloseAction:(id)a0;
- (void)p_doCloseAction:(id)a0;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (id)init;

@end
