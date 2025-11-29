@interface ACCTemplateAlbumClipInfo : NSObject <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } leftUpper;
@property (nonatomic) struct CGPoint { double x; double y; } rightUpper;
@property (nonatomic) struct CGPoint { double x; double y; } leftLower;
@property (nonatomic) struct CGPoint { double x; double y; } rightLower;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } start;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
