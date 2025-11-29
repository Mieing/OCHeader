@class NSString;

@interface AWEElderModeModuleService : HTSService <AWEElderModeModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerElderModeAlert;
- (BOOL)shouldHideMusicElement;
- (BOOL)shouldHideShareCount;
- (id)elderModeSharedManager;
- (BOOL)isElderModeAlertShowing;
- (BOOL)enableElderGurdMode;

@end
