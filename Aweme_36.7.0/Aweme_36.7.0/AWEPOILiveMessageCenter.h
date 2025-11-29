@class AWEPOILiveDataCenterHandler, NSMutableDictionary, NSString, BDXBridgeEventSubscriber, NSMutableArray;
@protocol NSLocking;

@interface AWEPOILiveMessageCenter : NSObject <AWEPOILiveMessageHandler, AWEPOILiveMessageCenterProtocol>

@property (retain, nonatomic) AWEPOILiveDataCenterHandler *dataCenterHandler;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (retain, nonatomic) NSMutableDictionary *subscribers;
@property (retain, nonatomic) id<NSLocking> subscribersLock;
@property (retain, nonatomic) BDXBridgeEventSubscriber *eventCenterSubscriber;
@property (nonatomic) BOOL disable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCenter;

- (BOOL)postMsgWithEventName:(id)a0 params:(id)a1 extra:(id)a2;
- (void)registerDataCenterSource:(id)a0 key:(id)a1;
- (void)releaseMsgCenter:(unsigned long long)a0 extra:(id)a1;
- (id)messageWithEventName:(id)a0 params:(id)a1 extra:(id)a2;
- (BOOL)postMsg:(id)a0;
- (void)handleRegisterMsgSubscriber:(id)a0;
- (void)handleUnRegisterMsgSubscriber:(id)a0;
- (void)handleReleaseMsgCenter:(unsigned long long)a0 extra:(id)a1;
- (void)registerSubscriber:(id)a0;
- (void)unRegisterSubscriber:(id)a0;
- (id)subscriberWithEventName:(id)a0 extra:(id)a1 callback:(id /* block */)a2;
- (id)registerSubscriberWithEventName:(id)a0 extra:(id)a1 callback:(id /* block */)a2;
- (BOOL)handlePostMessage:(id)a0 withSubscriber:(id)a1;
- (void)handleEventCenter:(id)a0 params:(id)a1;
- (id)subscriberWithEventName:(id)a0 extra:(id)a1 container:(id)a2;
- (void)unregisterDataCenterSourceWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
