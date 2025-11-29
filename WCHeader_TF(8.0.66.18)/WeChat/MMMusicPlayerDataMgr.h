@interface MMMusicPlayerDataMgr : MMObject

+ (void)setCurMusicClipDuration:(double)a0;
+ (double)getCaptureMaxDuration;
+ (unsigned int)getActualMusicClipDuration:(double)a0;
+ (unsigned int)getActualVideoDuration:(double)a0;
+ (BOOL)canSelectVideoWithVideoDuration:(double)a0 andMusicDuration:(double)a1;

@end
