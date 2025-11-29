@class NSString;

@interface CGCloudPermission : CGObject <CGCloudPermission>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)checkCloudPermissions:(id)a0 completion:(id /* block */)a1;
- (void)handleRequestPermissionJsonEvent:(id)a0;
- (void)handleRequestPermissionPBEvent:(id)a0;
- (void)requestPermissionWithArray:(id)a0;

@end
