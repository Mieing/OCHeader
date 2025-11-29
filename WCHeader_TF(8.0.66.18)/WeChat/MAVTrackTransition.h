@class NSString, MAVVLogEffect;

@interface MAVTrackTransition : NSObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) MAVVLogEffect *effect;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) BOOL changed;

- (id)initWithPath:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isVaild;
- (void).cxx_destruct;

@end
