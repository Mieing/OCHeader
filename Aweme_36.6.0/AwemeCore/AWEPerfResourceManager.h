@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface AWEPerfResourceManager : NSObject

@property (retain, nonatomic) NSMutableArray *plugins;
@property (copy, nonatomic) NSArray *cleanPaths;
@property (retain, nonatomic) NSDictionary *pluginBlockDictionary;
@property (retain, nonatomic) NSMutableDictionary *pluginSizeCache;

+ (id)shareManager;
+ (BOOL)isHighAppStorage;

- (void)registerCleanPlugin:(id)a0;
- (void)cleanResourceWithOption:(unsigned long long)a0;
- (double)cleanSizeWithOption:(unsigned long long)a0;
- (void)cleanResourceWithOption:(unsigned long long)a0 cancelForCleanSize:(id /* block */)a1;
- (void)initAllStrategies;
- (BOOL)isEnableWithPlugin:(id)a0 option:(unsigned long long)a1;
- (double)getSizeForPlugin:(id)a0 option:(unsigned long long)a1;
- (void)setSizeForPlugin:(id)a0 option:(unsigned long long)a1 size:(double)a2;
- (void).cxx_destruct;

@end
