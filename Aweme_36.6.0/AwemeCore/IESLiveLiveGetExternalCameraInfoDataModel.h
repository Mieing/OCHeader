@class IESLiveLiveGetExternalCameraInfoResolutionMapModel, NSNumber, NSString;

@interface IESLiveLiveGetExternalCameraInfoDataModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveLiveGetExternalCameraInfoResolutionMapModel *resolutionMap;
@property (retain, nonatomic) NSNumber *connectStatus;
@property (copy, nonatomic) NSString *cameraType;
@property (copy, nonatomic) NSString *cameraName;
@property (copy, nonatomic) NSString *cameraSource;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
