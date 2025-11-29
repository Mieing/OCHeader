@class NSArray, NSNumber, NSString;

@interface AWEECEcUploadFileParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *tempFiles;
@property (retain, nonatomic) NSNumber *maxImageSize;
@property (retain, nonatomic) NSNumber *bitrate;
@property (copy, nonatomic) NSString *videoDomain;
@property (copy, nonatomic) NSString *videoAK;
@property (copy, nonatomic) NSString *videoSK;
@property (copy, nonatomic) NSString *videoToken;
@property (copy, nonatomic) NSString *spaceName;
@property (copy, nonatomic) NSString *imageDomain;
@property (copy, nonatomic) NSString *imageAK;
@property (copy, nonatomic) NSString *imageSK;
@property (copy, nonatomic) NSString *imageToken;
@property (copy, nonatomic) NSString *serviceID;
@property (nonatomic) BOOL deleteTempVideoFiles;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
