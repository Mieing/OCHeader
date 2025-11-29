@class NSString;

@interface AWEMVUGClientFeatureModule : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void)onAppHandleNotification;
- (void)onHandleAppShortcutAction;

@end
