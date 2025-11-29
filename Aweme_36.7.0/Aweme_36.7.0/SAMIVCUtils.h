@interface SAMIVCUtils : NSObject

+ (BOOL)isFileValid:(id)a0;
+ (id)errorWithCode:(long long)a0 msg:(id)a1;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeOfAsset:(id)a0 inRangeInfo:(id)a1;
+ (BOOL)createEmptyFileIfNeeded:(id)a0;
+ (BOOL)notEmptyWebPage:(id)a0;
+ (unsigned long long)fileSizeOf:(id)a0;
+ (BOOL)createDirIfNeeded:(id)a0;
+ (id)filterArray:(id)a0 validTaskID:(id)a1;
+ (id)transResultFromTask:(id)a0;
+ (void)syncErrorFromSubTask:(id)a0 toMultiTask:(id)a1;
+ (BOOL)cleanDirCacheIfNeeded:(id)a0;
+ (id)filterTasks:(id)a0 taskID:(id)a1;
+ (id)taskWithSubID:(id)a0 inTasks:(id)a1;
+ (id)taskWithVid:(id)a0 inTasks:(id)a1;
+ (BOOL)isSubTaskID:(id)a0 inTasks:(id)a1;
+ (id)filterArray:(id)a0 fromValidArray:(id)a1;
+ (void)syncError:(long long)a0 msg:(id)a1 requestID:(id)a2 phase:(unsigned long long)a3 toTasks:(id)a4;
+ (id)commonErrorAtPhase:(unsigned long long)a0;
+ (id)transResultsFromTasks:(id)a0 taskID:(id)a1 speakerID:(id)a2;
+ (id)createVideoDataFromAsset:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
+ (id)logTagChainAtPhase:(unsigned long long)a0;
+ (id)cacheLogTagChain;
+ (id)rangeInfosOfClipInfos:(id)a0;
+ (id)errorWithCode:(long long)a0;

@end
