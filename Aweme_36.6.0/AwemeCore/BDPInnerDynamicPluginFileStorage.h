@class NSDictionary;

@interface BDPInnerDynamicPluginFileStorage : NSObject

@property (copy, nonatomic) NSDictionary *dynamicPluginInfos;

+ (id)pluginInfoForPath:(id)a0;

- (id)loadDynamicPluginInfos;
- (id)allDynamicPluginPaths;
- (void).cxx_destruct;

@end
