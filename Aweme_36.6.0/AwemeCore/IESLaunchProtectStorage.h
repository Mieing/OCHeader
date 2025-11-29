@interface IESLaunchProtectStorage : NSObject

+ (BOOL)isProtectionEnabled;
+ (void)forceClearExceptionCounter;
+ (unsigned long long)getClearCacheCount;
+ (id)getKeychainBlackList;
+ (void)setProtectionEnabled:(BOOL)a0;
+ (void)setCounterBaseNumber:(unsigned long long)a0;
+ (void)setKeychainBlackList:(id)a0;
+ (id)getExceptionReason;
+ (unsigned long long)getCounterBaseNumber;
+ (unsigned long long)getClearLoginStateMaxCount;
+ (void)setExceptionReason:(id)a0;
+ (void)clearExceptionFlag;
+ (void)increaseClearCacheCount;
+ (BOOL)readExceptionFlag;
+ (void)increaseExceptionCounter;
+ (long long)readCurrentExceptionCounter;
+ (void)writeProtectModeHint:(id)a0;
+ (void)beginExceptionFlag;
+ (void)clearExceptionReason;
+ (void)clearClearCacheCount;
+ (id)readProtectModeHint;
+ (void)forceSetCurrentExceptionCounter:(long long)a0;
+ (void)setClearLoginStateMaxCount:(unsigned long long)a0;

@end
