@class NSString, OMCClipSegment, MJSpeechAudioData;

@interface MJASRRequestItem : NSObject

@property (readonly, nonatomic) OMCClipSegment *clipSegment;
@property (readonly, nonatomic) MJSpeechAudioData *silkAudioData;
@property (readonly, nonatomic) NSString *mediaFileURL;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRangeForASR;

- (id)initWithClipSegment:(id)a0 silkAudioData:(id)a1 mediaFileURL:(id)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 timeRangeForASR:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
- (id)description;
- (void).cxx_destruct;

@end
