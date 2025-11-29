@interface BDPMediaPickerPluginModel : BDPBasePluginModel

@property (nonatomic) long long count;
@property (nonatomic) long long bdpMediaType;
@property (nonatomic) long long bdpSourceType;
@property (nonatomic) long long maxDuration;
@property (nonatomic) long long bdpSizeType;
@property (nonatomic) long long cameraDevice;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;

@end
