@interface ToygerFaceFrame : ToygerFrame <NSCopying>

@property (nonatomic) long long message;
@property (nonatomic) long long staticMessage;
@property (nonatomic) BOOL has_face;
@property (nonatomic) int brightness;
@property (nonatomic) int distance;
@property (nonatomic) BOOL face_in_center;
@property (nonatomic) BOOL is_moving;
@property (nonatomic) BOOL good_quality;
@property (nonatomic) BOOL good_pitch;
@property (nonatomic) BOOL good_yaw;
@property (nonatomic) BOOL eyeBlink;
@property (nonatomic) double progress;
@property (nonatomic) double targetFaceRegion;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
