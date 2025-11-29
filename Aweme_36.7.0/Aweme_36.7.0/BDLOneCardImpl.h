@class NSString, NSMapTable;

@interface BDLOneCardImpl : NSObject <BDPLaunchDispatchObjectProtocol, BDPOneCardPluginDelegate>

@property (retain) NSMapTable *oneCardMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)sharedPlugin;
+ (BOOL)openWithLaunchParam:(id)a0;
+ (void)registerDispatchObject;

@end
