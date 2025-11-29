@class NSString;

@interface AFDBirthdayManager : NSObject <AFDBirthdayManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchBirthdayVideoOnce;
+ (id)dateWithUid:(id)a0;
+ (BOOL)showBirthdayPopupABTest;
+ (BOOL)isBirthdayToday:(id)a0;
+ (BOOL)hasShowedForUid:(id)a0;
+ (id)p_fetchList:(BOOL)a0 attemptCount:(long long)a1 headers:(id)a2;
+ (void)saveShowedForUid:(id)a0;
+ (BOOL)showBirthdayAtHomepage;
+ (void)downloadThenEditEffect:(id)a0 completion:(id /* block */)a1 enterFrom:(id)a2;
+ (void)fetchPreviewForPush;
+ (void)fetchEffectListOnly:(id /* block */)a0;
+ (void)onNotification:(id)a0;


@end
