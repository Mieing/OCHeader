@class NSString, NSMutableDictionary;

@interface AWEIMOnlineRemindPushManager : NSObject <AWELiveRoomMessage>

@property (retain, nonatomic) NSMutableDictionary *safeCheckDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)anchorEndLive;
- (void)anchorLeaveGuidePage;
- (BOOL)checkSceneValid;
- (BOOL)shouldFrequencyControl:(id)a0;
- (BOOL)canShowOnlineRemindPushForSecUid:(id)a0;
- (void)p_showOnlineRemindPush:(id)a0;
- (void)retryPush;
- (void)handleNoticeInAppPushNotification:(id)a0;
- (BOOL)p_safeCheck:(id)a0;
- (BOOL)p_shouldFrequencyControl:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
