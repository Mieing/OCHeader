@class NSMutableDictionary;

@interface BDPluginCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *pluginCache;

+ (id)manager;
+ (id)pluginCache;

- (void).cxx_destruct;
- (id)init;

@end
