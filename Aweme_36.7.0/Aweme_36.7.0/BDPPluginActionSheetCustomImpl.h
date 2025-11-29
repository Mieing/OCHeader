@class NSString;

@interface BDPPluginActionSheetCustomImpl : NSObject <BDPActionSheetPluginDelegate>

@property (nonatomic) unsigned long long orientationBackup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

@end
