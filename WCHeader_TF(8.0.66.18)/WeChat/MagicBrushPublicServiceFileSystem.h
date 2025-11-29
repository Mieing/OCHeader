@class NSMutableSet;
@protocol IMBFileSystem;

@interface MagicBrushPublicServiceFileSystem : MagicBrushFileSystemBizRegistry

@property (retain, nonatomic) id<IMBFileSystem> mAssetsFS;
@property (retain, nonatomic) id<IMBFileSystem> mWxaPkgFS;
@property (retain, nonatomic) NSMutableSet *mBizNameList;

- (id)initWithPara:(id)a0 pkgPath:(id)a1 prefix:(id)a2 assetsFS:(id)a3 bizNameList:(id)a4;
- (void)dealloc;
- (id)precondition:(id)a0;
- (id)findAppropriateFileSystem:(id)a0;
- (id)findOtherBizName:(id)a0;
- (void)provideFileSystemList:(id)a0;
- (id)getNonFlattenFileSystem:(id)a0 prefix:(id)a1;
- (id)getFlattenFileSystem:(id)a0 prefix:(id)a1;
- (id)getPkgFileSystem:(id)a0 bizName:(id)a1;
- (void)addPkgFS:(id)a0 pkgPath:(id)a1 prefix:(id)a2 assetsFS:(id)a3 externalFS:(id)a4;
- (void).cxx_destruct;

@end
