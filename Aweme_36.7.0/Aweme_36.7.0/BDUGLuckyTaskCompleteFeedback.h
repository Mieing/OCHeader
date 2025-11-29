@interface BDUGLuckyTaskCompleteFeedback : NSObject

+ (void)initializeActivityTaskManager;
+ (id)__doActionPathWithForceUpdate:(BOOL)a0;
+ (id)__responseFilter;
+ (void)__showFeedback:(id)a0;
+ (void)__handleNotification:(id)a0;
+ (void)__handleToast:(id)a0;
+ (void)__handlePopup:(id)a0;
+ (void)__handleSidebar:(id)a0;
+ (void)__trackLetterReceive:(id)a0;
+ (BOOL)__expireCheck:(double)a0;
+ (BOOL)__pageCheck:(id)a0 posURL:(id)a1 defaultValue:(BOOL)a2;
+ (void)__trackPopupReceive:(id)a0;
+ (void)__trackPopupRemoveBeforeEnqueue:(id)a0 reason:(id)a1;
+ (id)__modifyLynxSchema:(id)a0 trackTag:(id)a1;
+ (void)__trackToastReceive:(id)a0;
+ (void)__trackSidebarReceive:(id)a0;
+ (void)__trackSidebarShow:(id)a0 success:(BOOL)a1 reason:(id)a2;
+ (id)__updateDoActionPath;
+ (void)__sdkSettingsUpdate;

@end
