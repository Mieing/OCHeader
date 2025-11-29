@class NSString;

@interface AWESidebarRecentlyAppsService : HTSService <AWESidebarRecentlyAppsService, BDPBootLifeCycleMessage>

@property (nonatomic) BOOL isEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)init;

@end
