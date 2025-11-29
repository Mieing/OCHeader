@class NSString, BDPUniqueID;

@interface BDPAPPKryptonPermissionServiceImpl : NSObject <KryptonPermissionService>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPermissions:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (BOOL)requestGranted:(unsigned long long)a0;
- (id)getBDPPermissionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
