@class MJVideoFrameExtractor, MJOCRProcessor;

@interface MJVideoFrameTextDetector : NSObject

@property (readonly, nonatomic) MJOCRProcessor *ocrProcessor;
@property (readonly, nonatomic) MJVideoFrameExtractor *videoFrameExtractor;
@property (nonatomic) BOOL textFound;
@property BOOL isCanceled;

+ (id)getClipSegmentPHLocalIdentifier:(id)a0;
+ (id)calcTimestampsFromTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 videoFrameSampleRate:(double)a1;

- (id)init;
- (void)dealloc;
- (void)detectTextWithClipSegment:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 completionHandler:(id /* block */)a2;
- (void)detectTextWithPHLocalIdentifier:(id)a0 timestamps:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancel;
- (void).cxx_destruct;

@end
