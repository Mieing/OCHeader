@interface MMMatrixPathUtil : NSObject

+ (id)matrixCacheRootPath;
+ (long long)latestTimeWithCurTime:(long long)a0 accessTime:(long long)a1 modifyTime:(long long)a2 changeTime:(long long)a3 birthTime:(long long)a4;
+ (id)memoryStatLaunchTimePath;
+ (void)autoCleanDiretory:(id)a0 withTimeout:(double)a1;
+ (void)setMatrixCacheRootPath:(id)a0;
+ (id)memoryStatPluginCachePath;

@end
