@interface GameCenterAPI : NSObject

+ (id)getGameTabBarVcWithParams:(id)a0 extra:(id)a1 onCloseBlock:(id /* block */)a2;
+ (BOOL)openGameTabHome:(id)a0 withExtra:(id)a1 withVC:(id)a2 retErrorMsg:(id *)a3;
+ (BOOL)openGameCenterView:(id)a0 openType:(int)a1 extInfo:(id)a2 retErrorMsg:(id *)a3;
+ (int)openMainPage:(id)a0;
+ (int)openGameLibrary:(id)a0;
+ (int)openGameDetail:(id)a0 extInfo:(id)a1 retErrorMsg:(id *)a2;
+ (int)openGameMsgCenter:(id)a0 extInfo:(id)a1;

@end
