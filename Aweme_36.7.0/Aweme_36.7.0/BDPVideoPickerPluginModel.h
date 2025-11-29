@interface BDPVideoPickerPluginModel : BDPBasePluginModel

@property (nonatomic) BOOL compressed;
@property (nonatomic) long long maxDuration;
@property (nonatomic) long long bdpSourceType;
@property (nonatomic) long long cameraDevice;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;

@end
