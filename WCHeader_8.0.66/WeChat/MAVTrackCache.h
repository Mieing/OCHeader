@class NSMutableDictionary;

@interface MAVTrackCache : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } imageDuration;
@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (retain, nonatomic) NSMutableDictionary *resourceCache;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init:(id)a0;
- (void)initCache;
- (id)getResource:(id)a0;
- (void)setResource:(id)a0 withTrack:(id)a1;
- (struct CGImage { } *)getImageRef:(id)a0;
- (void)remove:(id)a0;
- (void)removeAllObjects;
- (struct CGImage { } *)createRescaleImage:(id)a0;
- (void)didReceiveMemoryWarning:(id)a0;
- (void).cxx_destruct;

@end
