@class NSString, MBPackageLogic;

@interface WeAvatarResPackageWeAppImpl : NSObject <IWeAvatarResPackageLogic>

@property (retain, nonatomic) MBPackageLogic *pkg;
@property (nonatomic) BOOL isDownloadFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfString:(id)a0;
- (void)dealloc;
- (BOOL)checkPackageExist;
- (void)tryUpdatePackage:(id /* block */)a0 failBlock:(id /* block */)a1;
- (id)getCodePackageData;
- (id)getCodePackagePath;
- (id)getCodePackageMD5;
- (void).cxx_destruct;

@end
