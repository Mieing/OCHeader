@interface EditVideoReporter : MMObject

+ (void)editVideoReportOnEntranceType:(unsigned long long)a0 withClickBtn:(unsigned long long)a1 withEditAttr:(id)a2 withVideoDuration:(unsigned long long)a3 withCropDuration:(unsigned long long)a4;
+ (void)editVideoReportCompositionResult:(BOOL)a0 startTime:(struct timeval { long long x0; int x1; })a1 endTime:(struct timeval { long long x0; int x1; })a2 videoDuration:(unsigned long long)a3 videoStartTime:(unsigned long long)a4 videoEndTime:(unsigned long long)a5;

@end
