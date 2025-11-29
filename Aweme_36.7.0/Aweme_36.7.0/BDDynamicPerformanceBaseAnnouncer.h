@class NSHashTable;

@interface BDDynamicPerformanceBaseAnnouncer : NSObject

@property (readonly, nonatomic) NSHashTable *listeners;

- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)removeAllListeners;
- (id)init;
- (void)addListener:(id)a0;

@end
