@class NSString, NSArray, UIImage;

@interface VEAlgorithmSessionResultEnigma : VEAlgorithmSessionResult

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long codeType;
@property (nonatomic) long long resultFrom;
@property (copy, nonatomic) NSArray *quadrilateralPoints;
@property (retain, nonatomic) UIImage *srcImage;
@property (nonatomic) float zoomFactor;
@property (nonatomic) float vesdk_algorithm_init_duration;
@property (nonatomic) float vesdk_algorithm_qrcode_duration;
@property (nonatomic) float vesdk_algorithm_not_qrcode_duration;
@property (nonatomic) float vesdk_algorithm_handle_frame;
@property (nonatomic) float vesdk_scan_duration;
@property (nonatomic) BOOL valid;
@property (nonatomic) int face_count;
@property (retain, nonatomic) NSArray *face_rect;
@property (nonatomic) int body_count;
@property (retain, nonatomic) NSArray *body_rect;

- (void).cxx_destruct;
- (id)init;

@end
