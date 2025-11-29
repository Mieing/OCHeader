@class HTSBackgroundFetchContext, HTSShortcutContext, HTSOpenURLContext, UIApplication, HTSHandleNotificationContext, HTSNotificationContext, NSDictionary, HTSINIntentContext, HTSBgURLSessionContext, HTSUserActivityContext, HTSBootAppDelegate;

@interface HTSAppContext : NSObject

@property (retain, nonatomic) NSDictionary *launchOptions;
@property (retain, nonatomic) UIApplication *application;
@property (nonatomic) BOOL backgroundLaunch;
@property (nonatomic, getter=isActivePrewarm) BOOL activePrewarm;
@property (retain, nonatomic) HTSBootAppDelegate *appDelegate;
@property (retain, nonatomic) HTSOpenURLContext *openURLContext;
@property (retain, nonatomic) HTSNotificationContext *notificationContext;
@property (retain, nonatomic) HTSUserActivityContext *userActivityContext;
@property (retain, nonatomic) HTSBackgroundFetchContext *backgroundFetchContext;
@property (retain, nonatomic) HTSShortcutContext *shortcutContext;
@property (retain, nonatomic) HTSBgURLSessionContext *bgURLSessionContext;
@property (retain, nonatomic) HTSHandleNotificationContext *handleNotificationContext;
@property (retain, nonatomic) HTSINIntentContext *intentContext;
@property (nonatomic) BOOL hasEnterBackground;
@property (readonly) BOOL isSystemBackgroundLaunch;
@property (readonly) BOOL isBackgroundFetchLaunch;

+ (id)sharedContext;

- (void).cxx_destruct;

@end
