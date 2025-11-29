@class NSString;

@interface BDPUnisusTrackerManager : NSObject <UnisusTrackerServiceProtocol, BDPUnisusBasePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)event:(id)a0 attributes:(id)a1;

@end
