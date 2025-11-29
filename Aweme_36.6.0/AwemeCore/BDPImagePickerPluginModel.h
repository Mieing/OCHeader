@class BDPUniqueID;

@interface BDPImagePickerPluginModel : BDPBasePluginModel

@property (nonatomic) long long count;
@property (nonatomic) long long bdpSizeType;
@property (nonatomic) long long bdpSourceType;
@property (nonatomic) long long cameraDevice;
@property (nonatomic) BOOL detailConfigPath;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
