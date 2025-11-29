@class NSString, NSMutableDictionary;
@protocol LLDitoLynxNativeCommunicationProtocol, LLDitoComponentViewModel;

@interface LLDitoLynxNativeBridgeManager : NSObject

@property (weak, nonatomic) id<LLDitoComponentViewModel, LLDitoLynxNativeCommunicationProtocol> viewModel;
@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (readonly, nonatomic) NSString *containerID;

- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callbackByContainerID:(id /* block */)a1;
- (void)subscribeBDXEvent;
- (void)subscribeUpdate;
- (void)subscribeRemove;
- (void)subscribeSwitchDitoEvent;
- (void)subscribeDispatchPOIAction;
- (id)initWithLynxViewModel:(id)a0;
- (id)fetchContainerID;
- (void)subscribeDispatchDitoEvent;
- (void)registerGetTrackParamsJSB;
- (void)registerBDXLocalMethod;
- (void).cxx_destruct;
- (void)dealloc;

@end
