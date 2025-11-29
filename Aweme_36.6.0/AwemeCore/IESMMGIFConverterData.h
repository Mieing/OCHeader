@class NSURL;

@interface IESMMGIFConverterData : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *srcVideoURL;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) long long frameRate;
@property (nonatomic) double frameDuration;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
