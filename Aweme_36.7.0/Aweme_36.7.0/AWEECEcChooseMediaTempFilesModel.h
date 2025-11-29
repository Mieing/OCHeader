@class NSString, NSNumber;

@interface AWEECEcChooseMediaTempFilesModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *tempFilePath;
@property (retain, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *base64Data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
