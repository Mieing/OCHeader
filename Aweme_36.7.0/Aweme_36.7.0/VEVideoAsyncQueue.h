@class NSString;
@protocol VEVideoProcessDelegate;

@interface VEVideoAsyncQueue : IESMMObject <VEVideoProcessDelegate>

@property (weak, nonatomic) id<VEVideoProcessDelegate> downstream;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isAccurate;
@property (nonatomic) BOOL isPreSeek;
@property (nonatomic) int maxRefFrames;
@property (nonatomic) unsigned int decodePixFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeVideoDatas;
- (id)getVideoDataWithAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isGtThresholdCache;
- (void)setExportorFlag:(BOOL)a0;
- (void)setSeekPosFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)requstVideoData:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)hasAvailable:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)getNextVideoSampleBuffer;
- (void).cxx_destruct;
- (id)init;

@end
