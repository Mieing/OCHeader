@class NSString;

@interface BDLOCNativeAppPageLifeCyclePluginImpl : NSObject <BDPPageLifeCyclePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)pageWillEnterWithPagePath:(id)a0 uniqueID:(id)a1;
- (void)pageDidEnterWithPagePath:(id)a0 uniqueID:(id)a1;
- (void)pageWillLeaveWithPagePath:(id)a0 uniqueID:(id)a1;
- (void)pageDidLeaveWithPagePath:(id)a0 uniqueID:(id)a1;
- (void)changePageWithPagePath:(id)a0 queryDict:(id)a1 uniqueID:(id)a2;
- (id)init;

@end
