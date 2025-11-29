@class NSString, NSMapTable;

@interface CachalotMessageCenter : NSObject <CachalotMessageDeliverer>

@property (retain, nonatomic) NSMapTable *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandler:(id)a0 forMessageId:(id)a1;
- (void)deliverMessage:(id)a0 callback:(id /* block */)a1;
- (void)unregisterHandler:(id)a0 forMessageId:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
