@class NSArray;

@interface VECaptureProcessParamRhythmic : VECaptureProcessParam

@property (retain, nonatomic) NSArray *crop_list;
@property (nonatomic) float alpha_max;
@property (nonatomic) float velocity_max;

- (void).cxx_destruct;

@end
