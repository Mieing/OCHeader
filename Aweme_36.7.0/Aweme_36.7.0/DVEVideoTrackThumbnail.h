@class NSString;

@interface DVEVideoTrackThumbnail : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;

- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 identifier:(id)a1;
- (void).cxx_destruct;

@end
