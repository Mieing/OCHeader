@class NSMutableDictionary, NSMutableSet;

@interface MBWxaPkgCacheLogic : NSObject {
    NSMutableDictionary *_dicCacheFileInfo;
    NSMutableSet *_setUnpackedPkgFilePath;
    long long _unpackTime;
    NSMutableDictionary *_dicCacheFileAccessedTimeRecord;
}

- (id)init;
- (void)dealloc;
- (BOOL)unpackPkgWithFilePath:(id)a0 unpackLib:(void *)a1;
- (BOOL)unpackPkgFromPath:(id)a0 bizName:(id)a1;
- (void)clearAllPkgInfo;
- (id)getMBCacheFileInfoWithFullUrl:(id)a0;
- (id)contentsOfDirectoryWithFullUrl:(id)a0 error:(id *)a1;
- (BOOL)isString:(id)a0 inArray:(id)a1;
- (long long)getUnpackTime;
- (void)setAccessedTimeToCurrentTimeWithFullUrl:(id)a0;
- (long long)getAccessedTimeWithFullUrl:(id)a0;
- (void).cxx_destruct;

@end
