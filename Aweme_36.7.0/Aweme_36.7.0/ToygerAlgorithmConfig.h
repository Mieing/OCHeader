@class NSString, NSArray, NSDictionary;

@interface ToygerAlgorithmConfig : ToygerBaseModel

@property (copy, nonatomic) NSString *stack_time;
@property (copy, nonatomic) NSString *blink_openness;
@property (copy, nonatomic) NSString *eye_openness;
@property (copy, nonatomic) NSString *eye_occlusion;
@property (copy, nonatomic) NSString *pose_pitch;
@property (copy, nonatomic) NSString *pose_yaw;
@property (copy, nonatomic) NSString *pose_gaussian;
@property (copy, nonatomic) NSString *pose_motion;
@property (copy, nonatomic) NSString *pose_pitchMin;
@property (copy, nonatomic) NSString *pose_rectwidth;
@property (copy, nonatomic) NSString *pose_integrity;
@property (copy, nonatomic) NSString *pose_light;
@property (copy, nonatomic) NSString *pose_yawMin;
@property (copy, nonatomic) NSString *lip_motion;
@property (copy, nonatomic) NSString *log_level;
@property (copy, nonatomic) NSString *min_iod;
@property (copy, nonatomic) NSString *max_iod;
@property (copy, nonatomic) NSString *quality_min_quality;
@property (copy, nonatomic) NSArray *liveness_combination;
@property (copy, nonatomic) NSArray *liveness_combination_retries;
@property (copy, nonatomic) NSDictionary *threshold;
@property (copy, nonatomic) NSString *max_face_num;
@property (copy, nonatomic) NSString *detect_face_num;
@property (copy, nonatomic) NSString *speed;
@property (copy, nonatomic) NSDictionary *near_far;
@property (nonatomic) long long algoType;
@property (copy, nonatomic) NSString *docType;
@property (nonatomic) long long pageNo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectInPic;
@property (nonatomic) long long rotateTimes;
@property (nonatomic) long long blur;
@property (nonatomic) long long exposure;
@property (copy, nonatomic) NSString *secProtocol;

- (void)addDragonflyDefaultConfig;
- (void)addLocalVerifyDefaultConfig;
- (void).cxx_destruct;
- (id)init;

@end
