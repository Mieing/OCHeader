@class NSString;

@interface AWEPluginDUXCustomImpl : NSObject <BDPDUXPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)showDUXDialogWithUniqueID:(id)a0 title:(id)a1 icon:(id)a2 desc:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)showLaunchAppDUXDialogWithUniqueID:(id)a0 title:(id)a1 desc:(id)a2 confirmBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
- (unsigned long long)bdp_fontMode;

@end
