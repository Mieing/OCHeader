@interface AWEECCommentAreaAuthorizationManager : NSObject

+ (void)setUserAuthorizationAlertState:(BOOL)a0;
+ (void)setIsShowingUserAuthorizationAlertState:(BOOL)a0;
+ (void)postUserAuthorizationAlertState;
+ (void)requestUserAuthorizationAlertState;
+ (void)requestCommentAreaInitState;
+ (BOOL)getUserAuthorizationAlertState;
+ (BOOL)getIsShowingUserAuthorizationAlertState;

@end
