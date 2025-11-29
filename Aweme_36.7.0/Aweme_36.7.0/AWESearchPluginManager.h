@class NSMutableArray, NSMapTable;

@interface AWESearchPluginManager : NSObject

@property (retain, nonatomic) NSMutableArray *pluginList;
@property (retain, nonatomic) NSMapTable *caches;

- (void).cxx_destruct;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;

@end
