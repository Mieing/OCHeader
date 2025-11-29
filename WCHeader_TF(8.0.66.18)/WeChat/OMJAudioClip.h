@class NSString;

@interface OMJAudioClip : NSObject

@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRangeInAsset;
@property (readonly, nonatomic) double volume;
@property (nonatomic) BOOL isLooping;

- (id)initWithFilePath:(id)a0 volume:(float)a1;
- (id)initWithFilePath:(id)a0 timeRangeInAsset:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 volume:(float)a2;
- (id)initWithFilePath:(id)a0 timeRangeInAsset:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 volume:(float)a2 isLooping:(BOOL)a3;
- (void).cxx_destruct;

@end
