@class IESSoloKTVDrawCGImpl, IESSCMetalRenderParams, IESSCTimeline, IESSCExportSession, IESSCMetalTransformFilter, IESSCTimelineBuilder;

@interface IESSoloKTVVideoEditManager : NSObject

@property (retain, nonatomic) IESSCExportSession *exportSession;
@property (retain, nonatomic) IESSCTimeline *timeline;
@property (retain, nonatomic) IESSCTimelineBuilder *builder;
@property (retain, nonatomic) IESSoloKTVDrawCGImpl *asyncDraw;
@property (retain, nonatomic) IESSCMetalTransformFilter *filter;
@property (retain, nonatomic) IESSCMetalRenderParams *params;

- (void)generateBlackPlayerItem:(id)a0 completion:(id /* block */)a1;
- (id)resizeImage:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
- (void)generateTemplatePlayerItem:(id)a0 templateModel:(id)a1 needAudio:(BOOL)a2 completion:(id /* block */)a3;
- (id)generateTemplatePlayerItemSync:(id)a0 templateModel:(id)a1 needAudio:(BOOL)a2;
- (void)cancelExportWithCompletion:(id /* block */)a0;
- (void)generateTemplateVideo:(id)a0 templateModel:(id)a1 savePath:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)renderImage:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 targetImage:(id)a2 isWait:(BOOL)a3;
- (id)generateBlackPlayerItemInternal:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeMakeWithSeconds:(double)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeMakeWithSeconds:(double)a0 duration:(double)a1;
- (id)generateVoiceSegment:(id)a0;
- (id)convertToTimeline:(id)a0 templateModel:(id)a1 needAudio:(BOOL)a2 needCover:(BOOL)a3;
- (void)trackExportDuration:(BOOL)a0 startTime:(double)a1 duration:(double)a2;
- (void)generateTemplateVideoInternal:(id)a0 templateModel:(id)a1 savePath:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (id)generateBGSegment:(id)a0 templateModel:(id)a1;
- (id)generateMaskSegment:(id)a0 templateModel:(id)a1;
- (id)generateTitleSegment:(id)a0 templateModel:(id)a1;
- (id)generateSingerSegment:(id)a0 templateModel:(id)a1;
- (id)generateLyricSegment:(id)a0 templateModel:(id)a1;
- (id)generateMidiSegment:(id)a0 templateModel:(id)a1;
- (id)generateCoverSegment:(id)a0;
- (id)generateAudioSegment:(id)a0 userRecord:(id)a1;
- (id)generateOneImageSegment:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (id)generateOneVideoSegmentWithAsset:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)generateStringSegment:(double)a0 attribute:(id)a1 position:(id)a2 title:(id)a3;
- (id)generateCover:(BOOL)a0 path:(id)a1 title:(id)a2 name:(id)a3;
- (void)removeDuplicatesAudioSegment:(id)a0;
- (id)modelToAudioSegment:(id)a0;
- (void)updateVoiceVolume:(id)a0 volume:(float)a1 delay:(float)a2 endTime:(double)a3;
- (void)updateEffect:(id)a0 effectPath:(id)a1;
- (void)sortAudioModelASC:(id)a0;
- (id)generateOneVideoSegment:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)clean;

@end
