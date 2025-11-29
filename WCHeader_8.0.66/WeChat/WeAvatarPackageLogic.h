@class NSObject;
@protocol IWeAvatarResPackageLogic, IWeAvatarCodePackageLogic;

@interface WeAvatarPackageLogic : NSObject

@property (retain, nonatomic) NSObject<IWeAvatarResPackageLogic> *resPackageLogic;
@property (retain, nonatomic) NSObject<IWeAvatarCodePackageLogic> *codePackageLogic;
@property (readonly, nonatomic) BOOL isDebugMode;

- (id)init;
- (void)dealloc;
- (BOOL)checkPackageExist;
- (void)unpack;
- (void)checkUpdate:(id /* block */)a0 fail:(id /* block */)a1;
- (id)getFileData:(id)a0;
- (void).cxx_destruct;

@end
