@class NSDictionary, BDPInnerDynamicPluginFileStorage;

@interface BDPDynamicPluginFileStorage : NSObject

@property (retain, nonatomic) BDPInnerDynamicPluginFileStorage *innerStorage;
@property (readonly, copy, nonatomic) NSDictionary *innerDynamicPluginInfos;

- (id)updatedPluginPathForName:(id)a0 version:(id)a1 md5:(id)a2;
- (void)removeDynamicPluginFileForName:(id)a0 version:(id)a1 md5:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
