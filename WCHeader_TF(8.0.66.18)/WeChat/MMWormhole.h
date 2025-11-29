@class NSString, NSMutableDictionary;
@protocol MMWormholeTransiting;

@interface MMWormhole : NSObject <MMWormholeTransitingDelegate>

@property (retain, nonatomic) NSMutableDictionary *listenerBlocks;
@property (retain, nonatomic) id<MMWormholeTransiting> wormholeMessenger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithApplicationGroupIdentifier:(id)a0 optionalDirectory:(id)a1;
- (void)dealloc;
- (void)sendNotificationForMessageWithIdentifier:(id)a0;
- (void)registerForNotificationsWithIdentifier:(id)a0;
- (void)unregisterForNotificationsWithIdentifier:(id)a0;
- (void)didReceiveMessageNotification:(id)a0;
- (id)listenerBlockForIdentifier:(id)a0;
- (void)notifyListenerForMessageWithIdentifier:(id)a0 message:(id)a1;
- (void)passMessageObject:(id)a0 identifier:(id)a1;
- (id)messageWithIdentifier:(id)a0;
- (void)clearMessageContentsForIdentifier:(id)a0;
- (void)listenForMessageWithIdentifier:(id)a0 listener:(id /* block */)a1;
- (void)stopListeningForMessageWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
