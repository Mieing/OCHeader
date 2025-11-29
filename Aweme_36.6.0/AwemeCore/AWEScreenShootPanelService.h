@class NSString;

@interface AWEScreenShootPanelService : HTSService <AWEScreenShootPanelService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)screenShootPanelManager;
- (id)screenShotSharePanel;
- (Class)screenShootPanelABSettings;

@end
