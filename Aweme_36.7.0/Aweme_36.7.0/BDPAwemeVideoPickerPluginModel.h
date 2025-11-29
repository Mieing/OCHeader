@class NSString, BDPUniqueID;

@interface BDPAwemeVideoPickerPluginModel : BDPBasePluginModel

@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long cameraPosition;
@property (copy, nonatomic) NSString *finishButtonText;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long sizeType;
@property (nonatomic) long long maxCountFromAlbum;
@property (nonatomic) double maxVideoDuration;
@property (nonatomic) double minVideoDuration;

- (BOOL)isSupportImage;
- (BOOL)isSupportVideo;
- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)isCompressed;
- (void).cxx_destruct;
- (id)init;

@end
