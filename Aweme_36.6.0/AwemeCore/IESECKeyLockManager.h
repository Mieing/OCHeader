@interface IESECKeyLockManager : NSObject

+ (BOOL)hasLock:(id)a0;
+ (void)lock:(id)a0 withAutoUnlock:(BOOL)a1 afterSeconds:(double)a2;
+ (void)autoUnlockWithTimer:(id)a0;
+ (void)unlockWithKey:(id)a0;
+ (void)initialize;
+ (double)timeSetting;
+ (void)unlock:(id)a0;

@end
