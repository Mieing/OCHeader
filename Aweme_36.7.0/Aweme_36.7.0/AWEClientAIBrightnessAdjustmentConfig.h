@interface AWEClientAIBrightnessAdjustmentConfig : NSObject

@property (nonatomic) double L_ref;
@property (nonatomic) double beta1;
@property (nonatomic) double ambient_min;
@property (nonatomic) double ambient_max;
@property (nonatomic) double mu_ref;
@property (nonatomic) double beta2;
@property (nonatomic) double video_min;
@property (nonatomic) double video_max;
@property (nonatomic) double global_min;
@property (nonatomic) double global_max;
@property (nonatomic) double k_std;
@property (nonatomic) BOOL ambient_response_enabled;
@property (nonatomic) BOOL algorithm_enabled;
@property (nonatomic) double upper_diff;
@property (nonatomic) double lower_diff;

- (id)init;

@end
