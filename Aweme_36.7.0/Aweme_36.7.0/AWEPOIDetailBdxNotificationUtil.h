@class DitoGeneralContainerPageContext, NSMutableDictionary;
@protocol AWEPOIUGCRateContextProtocol;

@interface AWEPOIDetailBdxNotificationUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (weak, nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> *context;

- (void)handleLynxBroadcastNotification:(id)a0;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callback:(id /* block */)a1;
- (void)bindStateAndAction;
- (void)subscribeUgcBDXEvent;
- (void)subscribeRateWithEventName:(id)a0;
- (void)subscribeLikeRateEvent;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
