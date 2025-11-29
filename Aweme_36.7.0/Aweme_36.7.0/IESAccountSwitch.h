@interface IESAccountSwitch : NSObject

+ (void)startSwitchToUserID:(id)a0 completion:(id /* block */)a1;
+ (void)jumpToAccountSwitchIsHalfScreen:(BOOL)a0 extraDict:(id)a1;
+ (void)jumpToAccountSwitchHalfScreenWithExtraDic:(id)a0;
+ (void)jumpToAccountSwitchFullScreenWithExtraDic:(id)a0;

@end
