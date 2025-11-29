@interface TSPKAlbumPermissionUtil : NSObject

@property (nonatomic) BOOL shouldWork;
@property (nonatomic) long long addOnlyStatus;
@property (nonatomic) long long readWriteStatus;

+ (id)albumAuthorization;
+ (id)sharedInstance;

- (void)updateReadWritePermissionStatus:(long long)a0;
- (id)getPermissionParams;
- (void)updateAddOnlyPermissionStatus:(long long)a0;
- (BOOL)permissionValidateSuccess;
- (BOOL)addOnlyPermissionValidateSuccess;

@end
