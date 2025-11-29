@class NSString;

@interface KryptonDefaultPermissionService : NSObject <KryptonPermissionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPermissions:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (BOOL)requestGranted:(unsigned long long)a0;
- (void)requestPermissionForMediaType:(id)a0 withBlock:(id /* block */)a1;

@end
