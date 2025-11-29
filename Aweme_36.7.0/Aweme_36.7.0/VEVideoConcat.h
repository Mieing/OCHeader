@interface VEVideoConcat : NSObject

@property BOOL isCancelled;

+ (long long)convertTSSegmentsToMOVWithTSPaths:(id)a0 outputPath:(id)a1;
+ (int)muxAV:(id)a0 audio:(id)a1 outputUrl:(id)a2;
+ (long long)concatVideosWithPaths:(id)a0 outputPath:(id)a1 totalDuration:(double)a2 ProgressBlock:(id /* block */)a3;
+ (id)getAVErrorDes:(int)a0;

- (int)concatVideosWithInputPaths:(id)a0 outputPath:(id)a1 useClipDuration:(BOOL)a2;
- (int)concatVideosWithInputPaths:(id)a0 outputPath:(id)a1;
- (id)init;
- (void)cancel;

@end
