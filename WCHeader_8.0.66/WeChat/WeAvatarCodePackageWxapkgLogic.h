@class NSString, MBPackageLogic;
@protocol IWeAvatarResPackageLogic;

@interface WeAvatarCodePackageWxapkgLogic : NSObject <IWeAvatarCodePackageLogic>

@property (retain, nonatomic) MBPackageLogic *pkg;
@property (weak, nonatomic) id<IWeAvatarResPackageLogic> resLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResPackage:(id)a0;
- (void)dealloc;
- (void)unpack;
- (id)getResPackageData;
- (BOOL)copyToDestPath:(id)a0 fromSrcData:(id)a1;
- (id)getFileData:(id)a0;
- (void).cxx_destruct;

@end
