@class NSMapTable;

@interface AWEOFGBridgeContext : NSObject

@property (copy, nonatomic) NSMapTable *weakObjects;
@property (copy, nonatomic) NSMapTable *strongObjects;

- (void)setWeakObject:(id)a0 forKey:(id)a1;
- (void)setStrongObject:(id)a0 forKey:(id)a1;
- (id)mapTables;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;

@end
