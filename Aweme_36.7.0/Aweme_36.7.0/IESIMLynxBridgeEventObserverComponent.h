@class NSString;

@interface IESIMLynxBridgeEventObserverComponent : AWEIMComponentBase <IESIMMessageListLifeCycleAction>

@property (retain, nonatomic) id bridgeEventSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)removeLynxEventObservers;
- (void)addLynxEventObservers;
- (void)msgList_viewDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
