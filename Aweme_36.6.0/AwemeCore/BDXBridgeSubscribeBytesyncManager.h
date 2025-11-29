@class NSMapTable;

@interface BDXBridgeSubscribeBytesyncManager : NSObject

@property (class, readonly, nonatomic) BDXBridgeSubscribeBytesyncManager *sharedPool;

@property (copy, nonatomic) NSMapTable *containers;

- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
