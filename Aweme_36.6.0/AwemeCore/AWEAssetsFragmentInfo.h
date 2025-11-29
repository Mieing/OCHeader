@class NSString;

@interface AWEAssetsFragmentInfo : NSObject <NSCopying>

@property (nonatomic) double lowerLeftX;
@property (nonatomic) double lowerLeftY;
@property (nonatomic) double lowerRightX;
@property (nonatomic) double lowerRightY;
@property (nonatomic) double upperLeftX;
@property (nonatomic) double upperLeftY;
@property (nonatomic) double upperRightX;
@property (nonatomic) double upperRightY;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } start;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } originDuration;
@property (nonatomic) long long livePhotoState;
@property (copy, nonatomic) NSString *forbidChangeLivePhotoStateText;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
