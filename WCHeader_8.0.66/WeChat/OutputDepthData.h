@class NSArray, NSData, NSString;

@interface OutputDepthData : NSObject

@property (retain, nonatomic) NSArray *five_points;
@property (retain, nonatomic) NSData *depth_data;
@property (retain, nonatomic) NSData *image_data;
@property (retain, nonatomic) NSString *checksum;
@property (nonatomic) long long capture_time;
@property (nonatomic) float median;
@property (nonatomic) float offset;
@property (nonatomic) float depthQualityScore;
@property (nonatomic) float closeMouthScore;
@property (nonatomic) BOOL depthQualityDetectPass;
@property (nonatomic) float shakeThr;
@property (nonatomic) float depth_eye_score;
@property (nonatomic) float depth_nose_score;
@property (nonatomic) float depth_mouth_score;
@property (nonatomic) float front_camera_fov;
@property (nonatomic) float face_ratio;
@property (nonatomic) int depth_replace_count;
@property (nonatomic) float replaceScore;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
