@class NSString;

@interface TAVResource : NSObject <NSCopying, TAVResourceTrackInfoProvider>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } sourceTimeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } scaledDuration;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })sourceTimeForTimelineTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)trackInfoForType:(id)a0 atIndex:(long long)a1;
- (id)tracksForType:(id)a0;
- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 renderSize:(struct CGSize { double x0; double x1; })a1;
- (id)pcmBufferAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 audioFormat:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
