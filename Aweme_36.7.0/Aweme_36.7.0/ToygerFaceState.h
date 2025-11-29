@interface ToygerFaceState : ToygerBaseModel

@property (nonatomic) BOOL has_face;
@property (nonatomic) int brightness;
@property (nonatomic) int distance;
@property (nonatomic) BOOL face_in_center;
@property (nonatomic) BOOL is_moving;
@property (nonatomic) BOOL good_quality;
@property (nonatomic) BOOL good_pitch;
@property (nonatomic) BOOL good_yaw;

- (id)init;

@end
