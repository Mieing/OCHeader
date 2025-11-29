@interface TcApiTool : NSObject

+ (id)md5:(id)a0;
+ (id)getAppDisplayName;
+ (id)GetURLWithParam:(id)a0 withParam:(id)a1;
+ (id)SDKInfo;
+ (id)random16Str;
+ (BOOL)isRegistSchemeInfoPlistFile:(id)a0;
+ (id)keyForLoginDataInKeyChain;
+ (id)decodeAccessToken:(id)a0 key:(id)a1;
+ (BOOL)notKeyboardOrAlertWindow:(id)a0;
+ (id)getAppDefinePath;
+ (void)MoveAllWindowWithAnimationActionType:(int)a0 windowArray:(id)a1 animation:(BOOL)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcFrameByOrientation:(int)a0 id:(id)a1;
+ (void)MoveWindowAnimation:(id)a0 animationId:(int)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 timeInterVal:(double)a3 name:(id)a4 context:(void *)a5;
+ (id)deviceMachineString;
+ (id)TCOSDKdeviceMachine:(id)a0;
+ (int)NSString16toNSNumber:(id)a0;
+ (id)resourceBundlePath;
+ (id)_decodeUrlSchemeFromUllinkV2:(id)a0;
+ (id)doDictionaryByParseURL:(id)a0;
+ (BOOL)isOpenApiSSoLogin:(id)a0;
+ (id)keyForAppSignTokenInKeyChain;
+ (id)encodeAppSignToken:(id)a0;
+ (id)keyForIfNeedUllinkInKeyChain;
+ (int)doCheckOpenApiId:(id)a0;
+ (id)_findTopViewControllerFromRootVC:(id)a0;
+ (void)MoveAllWindowOutOfScreen:(id)a0 animation:(BOOL)a1;
+ (void)MoveAllWindowIntoScreen:(id)a0 animation:(BOOL)a1;
+ (id)systemVersionString;
+ (id)webViewResourcePathOf:(id)a0;
+ (id)decodeUrlSchemeFromUllink:(id)a0;
+ (id)encodeUllinkFromUrlscheme:(id)a0;
+ (id)encodeUrlscheme:(id)a0;
+ (void)deleteKeychainValueForKey:(id)a0;
+ (BOOL)openUniversallinkIfNeed:(id)a0;
+ (void)showAlertTitle:(id)a0 message:(id)a1 delegate:(id)a2 cancelBtnTitle:(id)a3;
+ (id)getCachedOpenID;
+ (double)systemVersion;
+ (id)currentViewController;

@end
