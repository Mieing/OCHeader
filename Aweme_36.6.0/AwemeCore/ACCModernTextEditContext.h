@class NSDictionary;

@interface ACCModernTextEditContext : NSObject

@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) long long stickerLayer;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (copy, nonatomic) NSDictionary *clipTimeRangeDict;
@property (copy, nonatomic) NSDictionary *stickerTimeRangeDict;
@property (copy, nonatomic) NSDictionary *shapeTimeRangeDict;

- (void).cxx_destruct;

@end
