@class NSMutableDictionary, NSString, NSLock, RTVVoipMonitor;
@protocol RTVSettingsManager, RxInjector, RTVUserProfileManagerInterface;

@interface AWERTVReminderService : HTSService <AWERTVReminderService>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) NSMutableDictionary *hasRemindedRooms;
@property (readonly, nonatomic) NSLock *lock;
@property (retain, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVSettingsManager> settingManager;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)rxAwakeFromPropertyInjection;
- (id)__keyOfRemindModel:(id)a0;
- (long long)__missCallTypeFromRemindType:(long long)a0;
- (BOOL)canRemindWithModel:(id)a0;
- (void)markDidRemindWithModel:(id)a0;
- (void).cxx_destruct;

@end
