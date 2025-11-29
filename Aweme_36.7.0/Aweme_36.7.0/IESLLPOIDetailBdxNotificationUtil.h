@class NSMutableDictionary, LLDitoGeneralContainerPageContext;

@interface IESLLPOIDetailBdxNotificationUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (weak, nonatomic) LLDitoGeneralContainerPageContext *context;

- (void)handleLynxBroadcastNotification:(id)a0;
- (void)unregisterBDXSubscriber;
- (void)subscribeBDXWithEventName:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
