@class NSHashTable;

@interface AWEEcomSearchPitayaMerchandiseEventHub : NSObject

@property (retain, nonatomic) NSHashTable *activePages;

+ (id)sharedEventHub;

- (void)registerEcomFetchExtraResultMessageHandler:(id)a0;
- (void)unregisterPitayaMessageHandler:(id)a0;
- (void)registerPitayaMessageHandler:(id)a0;
- (void).cxx_destruct;

@end
