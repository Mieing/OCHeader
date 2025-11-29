@interface AWESearchVideoGoodsAlertAuthorizationManager : NSObject

+ (void)setUserAuthorizationAlertState:(BOOL)a0;
+ (void)setIsShowingUserAuthorizationAlertState:(BOOL)a0;
+ (BOOL)getUserAuthorizationAlertState;
+ (BOOL)getIsShowingUserAuthorizationAlertState;
+ (BOOL)shouldShowAuthorizationAlert;

@end
