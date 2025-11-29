@interface MMAppSceneUtil : NSObject

+ (BOOL)isMultiSceneSupported;
+ (BOOL)isSubSceneActive;
+ (BOOL)isMainSceneActive;
+ (BOOL)isShowInSubScene:(id)a0;
+ (id)mainWindowScene;
+ (id)subWindowScene;
+ (id)lastActiveWindowScene;
+ (id)lastActiveSceneRootWindow;
+ (BOOL)isMainScene:(id)a0;
+ (BOOL)isExternalDisplayConnected;
+ (BOOL)isMainSceneInExternalDisplay;
+ (BOOL)isiPadLayoutScene:(id)a0;

@end
