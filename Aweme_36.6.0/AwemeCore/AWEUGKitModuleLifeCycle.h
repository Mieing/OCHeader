@class NSString;

@interface AWEUGKitModuleLifeCycle : NSObject <HTSAppLifeCycle>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUGKitModuleDOUYINAdapterClass;

- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (BOOL)onHandleAppContinueUserActivity;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (BOOL)__shouldHandleCoreSpotlightSearchableItemActionType;

@end
