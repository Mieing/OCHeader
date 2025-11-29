@class NSString;

@interface AWESettingsTracker : NSObject <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSwitchingAccount;
+ (void)trackCombineWithStatus:(BOOL)a0;
+ (id /* block */)pushScene:(id)a0 extraParams:(id)a1;
+ (id)getEventStack;
+ (BOOL)eventDictionary:(id)a0 isForScene:(id)a1;
+ (void)trackWithScene:(id)a0 status:(BOOL)a1 extraParams:(id)a2;
+ (id)popEvent;
+ (void)trackCombineBackupWithStatus:(BOOL)a0;
+ (void)trackAfterLoginWithStatus:(BOOL)a0;
+ (void)trackSwitchAccountWithStatus:(BOOL)a0;
+ (void)trackAfterLogoutWithStatus:(BOOL)a0;
+ (void)trackUndefinedWithStatus:(BOOL)a0;
+ (void)trackByteSyncWithStatus:(BOOL)a0 taskID:(id)a1 timestamp:(unsigned long long)a2;
+ (void)trackByteSyncWithStatus:(BOOL)a0 extraParams:(id)a1;
+ (void)traceRequestWithSceneDictionary:(id)a0 status:(BOOL)a1;
+ (id)peekEvent;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

@end
