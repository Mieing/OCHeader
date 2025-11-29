@class NSArray, NSString;

@interface AWETeenTimeLockManager : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage>

@property (readonly, nonatomic) unsigned long long weekdayTimeLockLimit;
@property (readonly, nonatomic) unsigned long long weekendTimeLockLimit;
@property (readonly, nonatomic) unsigned long long todayTimeLockLimit;
@property (readonly, copy, nonatomic) NSArray *weekdayTimeLockLimitOptions;
@property (readonly, copy, nonatomic) NSArray *weekendTimeLockLimitOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)updateLocalTimeLockLimitWithWeekdayTime:(long long)a0 weekendTime:(long long)a1;
- (void)fetchTimeLockSettingsWithContext:(id)a0;
- (void)setWeekdayTimeLockLimit:(unsigned long long)a0;
- (void)setWeekendTimeLockLimit:(unsigned long long)a0;
- (BOOL)isTodayWeekend;
- (void)updateTimeLockLimitWithWeekdayTime:(id)a0 weekendTime:(id)a1 password:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (id)currentDate;

@end
