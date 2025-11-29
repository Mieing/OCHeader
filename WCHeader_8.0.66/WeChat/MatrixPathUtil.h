@interface MatrixPathUtil : NSObject

+ (id)matrixCacheRootPath;
+ (id)crashBlockPluginCachePath;
+ (id)appRebootAnalyzerCachePath;
+ (id)memoryStatPluginCachePath;
+ (void)autoCleanDiretory:(id)a0 withTimeout:(double)a1;
+ (long long)latestTimeWithCurTime:(long long)a0 accessTime:(long long)a1 modifyTime:(long long)a2 changeTime:(long long)a3 birthTime:(long long)a4;
+ (void)setMatrixCacheRootPath:(id)a0;
+ (unsigned long long)fileSizeAtPath:(id)a0;
+ (unsigned long long)folderSizeAtPath:(id)a0;

@end
