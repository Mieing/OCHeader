@class NSString;

@interface VECameraBachGraphHelper : NSObject

@property (nonatomic) long long enigma_scan_mode;
@property (nonatomic) long long enigma_run_mode;
@property (nonatomic) long long enigma_enhance_camera;
@property (nonatomic) long long enigma_auto_zoom_in;
@property (nonatomic) long long enigma_code_type;
@property (nonatomic) long long enigma_enable_rf;
@property (nonatomic) long long enigma_call_type;
@property (copy, nonatomic) NSString *model_name;

- (void)configCameraMode;
- (id)generateGraphConfigJson;
- (void).cxx_destruct;
- (id)init;

@end
