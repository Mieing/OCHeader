@class ACCURS, NSString, NSArray, NSDictionary, NSNumber;

@interface ACCCreateStickerModel : NSObject <NSCopying>

@property (retain, nonatomic) ACCURS *urs;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSArray *effectInfo;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct CGPoint { double x; double y; } anchor;
@property (nonatomic) double rotationAngle;
@property (nonatomic) BOOL isMirrorX;
@property (nonatomic) BOOL needAdjustScale;
@property (nonatomic) double scale;
@property (nonatomic) double alpha;
@property (retain, nonatomic) NSNumber *targetMaxEdgeNumber;
@property (retain, nonatomic) NSString *authorName;
@property (nonatomic) long long authorPlatformType;
@property (retain, nonatomic) NSNumber *enableNewEffectProtocolNum;

- (id)initWithURS:(id)a0 path:(id)a1 effectInfo:(id)a2 userInfo:(id)a3 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateUserInfo:(id)a0;

@end
