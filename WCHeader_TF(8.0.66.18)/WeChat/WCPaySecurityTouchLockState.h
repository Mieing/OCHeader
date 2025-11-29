@interface WCPaySecurityTouchLockState : NSObject

+ (void)setStateWithBase64String:(id)a0;
+ (void)setStateWithData:(id)a0;
+ (BOOL)isOldState:(id)a0;
+ (BOOL)isTouchLockOpen;
+ (void)setTouchLockOpen:(BOOL)a0;
+ (BOOL)isNotSupportTouchLock;

@end
