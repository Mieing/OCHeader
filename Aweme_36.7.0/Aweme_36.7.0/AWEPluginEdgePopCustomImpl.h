@class NSString;

@interface AWEPluginEdgePopCustomImpl : NSObject <BDPEdgePopPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)disableEdgePop:(BOOL)a0 forController:(id)a1;

@end
