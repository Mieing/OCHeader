@class WePkgPackage, NSString;

@interface WeAvatarResPackageWePkgImpl : NSObject <IWePkgFacadeExt, IWeAvatarResPackageLogic> {
    id /* block */ successBlock;
    id /* block */ failBlock;
}

@property (retain, nonatomic) WePkgPackage *pkg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)checkPackageExist;
- (void)tryUpdatePackage:(id /* block */)a0 failBlock:(id /* block */)a1;
- (id)getCodePackageData;
- (id)getCodePackagePath;
- (id)getCodePackageMD5;
- (void)onWekgOperateSuccess:(id)a0;
- (void)onWekgUpdateFailed:(id)a0 errorStr:(id)a1;
- (void)onWepkgNoNeedUpdate:(id)a0 version:(id)a1;
- (void).cxx_destruct;

@end
