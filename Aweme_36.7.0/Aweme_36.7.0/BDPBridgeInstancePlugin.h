@class NSString;

@interface BDPBridgeInstancePlugin : NSObject <BDPBridgeInstancePlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (unsigned long long)pluginMode;
+ (id)getInstancePlugin:(Class)a0 instance:(id)a1;
+ (id)bridgeInstanceTokenWith:(id)a0;


@end
