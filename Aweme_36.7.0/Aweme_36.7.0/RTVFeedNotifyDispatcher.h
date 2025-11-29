@class NSString, NSMutableDictionary;
@protocol RTVInteractionClientInterface, RTVXRControllerInjector;

@interface RTVFeedNotifyDispatcher : NSObject <RTVInteractionClientObserver, RTVInteractionClientObserver, RTVFeedNotifyDispatcherInterface>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVInteractionClientInterface> interactionClient;
@property (retain, nonatomic) NSMutableDictionary *notifyObserversMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)interactionClient:(id)a0 didReceiveOperation:(id)a1;
- (void)addNotifyObserver:(id)a0 ofMethod:(id)a1;
- (id)__decodeMessage:(id)a0;
- (void)__notifyDidReceiveMessage:(id)a0 ofMethod:(long long)a1;
- (void)removeNotifyObserver:(id)a0 ofMethod:(id)a1;
- (void).cxx_destruct;

@end
