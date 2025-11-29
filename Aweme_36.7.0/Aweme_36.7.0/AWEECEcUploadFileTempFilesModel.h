@class NSString;

@interface AWEECEcUploadFileTempFilesModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *tempFilePath;
@property (copy, nonatomic) NSString *mediaType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
