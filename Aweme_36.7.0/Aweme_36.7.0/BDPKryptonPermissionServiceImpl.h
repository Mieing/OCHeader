@class BDPRuntimeGame, NSString;

@interface BDPKryptonPermissionServiceImpl : NSObject <KryptonPermissionService>

@property (weak, nonatomic) BDPRuntimeGame *runtime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPermissions:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (BOOL)requestGranted:(unsigned long long)a0;
- (id)getBDPPermissionType:(unsigned long long)a0;
- (id)initWithRuntime:(id)a0;
- (void).cxx_destruct;

@end
