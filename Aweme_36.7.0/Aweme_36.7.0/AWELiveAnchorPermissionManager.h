@interface AWELiveAnchorPermissionManager : NSObject

+ (void)checkLivePermission:(id /* block */)a0;
+ (void)_savePermission:(BOOL)a0;
+ (BOOL)getLivePermission;

@end
