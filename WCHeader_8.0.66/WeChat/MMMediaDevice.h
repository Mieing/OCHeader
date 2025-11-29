@interface MMMediaDevice : MMObject

+ (void)isMediaDeviceAvailable:(int)a0 completionHandler:(id /* block */)a1;
+ (void)isMediaDeviceAvailable:(int)a0 shouldRequestAccessForMedia:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)isCameraAvailable:(id /* block */)a0 shouldRequestAccessForMedia:(BOOL)a1;
+ (void)isAlbumAvailable:(id /* block */)a0;
+ (void)isMicroPhoneAvailable:(id /* block */)a0 shouldRequestAccessForMedia:(BOOL)a1;
+ (void)isLocationAvailable:(id /* block */)a0;
+ (void)deviceHasMediaPrivilege:(id)a0 shouldRequestAccessForMedia:(BOOL)a1 completion:(id /* block */)a2;
+ (void)showMediaAuthorizedAlert:(id)a0 content:(id)a1;

@end
