@class NSArray;
@protocol IMBFileSystem;

@interface MagicBrushFileSystem : MagicBrushFileSystemBizRegistry

@property (retain, nonatomic) id<IMBFileSystem> mAssetsFS;
@property (retain, nonatomic) id<IMBFileSystem> mWxaPkgFS;
@property (retain, nonatomic) id<IMBFileSystem> mFlattenFS;
@property (retain, nonatomic) NSArray *mExternalList;

- (id)initWithPara:(id)a0 pkgPath:(id)a1 prefix:(id)a2 assetsFS:(id)a3 externalFS:(id)a4;
- (void)dealloc;
- (id)addNonFlattenFileSystem;
- (void)addExternalFileSystem:(id)a0;
- (id)getFlattenFileSystem;
- (id)getPkgFileSystem:(id)a0 bizName:(id)a1 prefix:(id)a2;
- (void)addPkgFS:(id)a0 pkgPath:(id)a1 prefix:(id)a2 assetsFS:(id)a3 externalFS:(id)a4;
- (void)addCustomPkgFS:(id)a0 customName:(id)a1 prefix:(id)a2;
- (void).cxx_destruct;

@end
