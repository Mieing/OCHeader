@interface AWEFansLocalUserHelper : NSObject

+ (id)currentLoginUser;
+ (long long)getLastFullTime;
+ (id)lastFullTimeKey;
+ (id)lastCursorKey;
+ (id)lastFullFailedKey;
+ (void)fetchUserDataWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)setLastFullTimeWithTime:(long long)a0;
+ (long long)getLastCursor;
+ (void)setLastCursorWithTime:(long long)a0;
+ (BOOL)isLastFullFailed;
+ (void)setIsLastFullFailed:(BOOL)a0;

@end
