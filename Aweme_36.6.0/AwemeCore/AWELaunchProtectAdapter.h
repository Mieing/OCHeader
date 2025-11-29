@interface AWELaunchProtectAdapter : NSObject

@property (class, copy, nonatomic) id /* block */ autoCleanCacheAction;
@property (class, nonatomic) BOOL alwaysKeepLoginState;

@end
