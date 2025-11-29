@class NSString, MBWxaPkgCacheMgr;

@interface MBWxaPkgFileSystem : DefaultFileSystem {
    MBWxaPkgCacheMgr *pkgInfoCacheMgr;
}

@property (copy, nonatomic) NSString *mBizName;
@property (copy, nonatomic) NSString *mPath;
@property (copy, nonatomic) NSString *mPrefix;
@property (copy, nonatomic) NSString *mKey;

- (id)initWithPkgPath:(id)a0 bizName:(id)a1 prefix:(id)a2;
- (void)dealloc;
- (BOOL)loadPkg:(id)a0;
- (BOOL)access:(id)a0 error:(id *)a1;
- (id)readDir:(id)a0 error:(id *)a1;
- (id)stat:(id)a0 recursive:(BOOL)a1 error:(id *)a2;
- (BOOL)unlink:(id)a0 error:(id *)a1;
- (id)readFile:(id)a0 position:(long long)a1 length:(long long)a2 error:(id *)a3;
- (BOOL)writeFile:(id)a0 data:(id)a1 isAppend:(BOOL)a2 error:(id *)a3;
- (BOOL)accept:(id)a0;
- (id)traversePath:(id)a0;
- (void).cxx_destruct;

@end
