@interface TMAlbumPermissionService : NSObject

@property (nonatomic) long long albumPermissionStatus;

+ (long long)getAlbumPermissionStatus;
+ (void)createAlbumCollection:(id)a0 completion:(id /* block */)a1;
+ (void)checkPermissionStatus:(long long)a0 Completionhandler:(id /* block */)a1;
+ (void)saveToAlbumWith:(id)a0 requestPlaceHolder:(id)a1 completion:(id /* block */)a2;
+ (void)new_saveToAlbumWith:(id)a0 requestPlaceHolder:(id)a1 completion:(id /* block */)a2;
+ (void)saveErrorReporter:(id)a0;
+ (id)sharedInstance;

- (long long)getAlbumPermissionStatus;

@end
