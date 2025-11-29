@class MBWxaPkgCacheLogic;

@interface MBWxaPkgCacheMgr : NSObject {
    MBWxaPkgCacheLogic *pkgInfoCacheLogic;
}

- (id)initWithPkgPath:(id)a0 bizName:(id)a1;
- (void)dealloc;
- (BOOL)loadPkg:(id)a0 bizName:(id)a1;
- (id)contentsOfDirectoryWithFullUrl:(id)a0 error:(id *)a1;
- (struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; })statWithFullUrl:(id)a0 error:(id *)a1;
- (BOOL)hasLocalCacheDataWithFullUrl:(id)a0;
- (id)getLocalCacheDataWithFullUrl:(id)a0;
- (id)getLocalCacheDataWithFullUrl:(id)a0 prefix:(id)a1 suffix:(id)a2;
- (id)getLocalCacheDataWithFullUrl:(id)a0 offset:(unsigned int)a1 length:(unsigned int)a2 error:(id *)a3;
- (id)getLocalCacheDataWithFullUrl:(id)a0 offset:(unsigned int)a1 length:(unsigned int)a2 error:(id *)a3 prefix:(id)a4 suffix:(id)a5;
- (void).cxx_destruct;

@end
