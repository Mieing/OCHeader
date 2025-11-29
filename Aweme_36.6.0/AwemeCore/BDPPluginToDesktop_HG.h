@interface BDPPluginToDesktop_HG : BDPBridgeInstancePlugin

+ (void)recordLaunchFromDesktopIfNeed:(id)a0;
+ (void)reportAddDesktop:(id)a0 triggerBy:(id)a1;
+ (BOOL)timeIsInSevenDay:(double)a0 currentDate:(id)a1;

- (void)addShortcutWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkShortcutWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
