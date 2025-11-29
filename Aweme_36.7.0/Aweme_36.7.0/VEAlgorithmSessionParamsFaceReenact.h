@class NSString;

@interface VEAlgorithmSessionParamsFaceReenact : VEAlgorithmSessionParams

@property (retain, nonatomic) NSString *graph_config_path;
@property (retain, nonatomic) NSString *keypoint_file_path;
@property (retain, nonatomic) NSString *output_directory_path;
@property (nonatomic) struct CGSize { double width; double height; } max_out_size;
@property (nonatomic) BOOL blend;

- (void).cxx_destruct;
- (id)init;

@end
