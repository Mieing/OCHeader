@class NSDictionary, NSString;

@interface AWEIMNotifyOnlineFriendsManager : NSObject <AWEPushSBCProtocol>

@property (retain, nonatomic) NSDictionary *notifySettingsConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (BOOL)pushSBCCouldHandleWithMsg:(id)a0 payload:(id)a1 businessType:(id)a2;
- (void)p_getLocalAWEIMUserFromPayload:(id)a0;
- (void)p_createOnlineRemindPushModel:(id)a0 payload:(id)a1;
- (void)p_startPullOnlineFriendsTimerIfNeeded;
- (void)p_showOnlineRemindPush:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
