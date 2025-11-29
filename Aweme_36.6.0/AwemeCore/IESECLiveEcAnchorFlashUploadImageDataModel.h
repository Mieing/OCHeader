@class NSString;

@interface IESECLiveEcAnchorFlashUploadImageDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *imgUrl;
@property (copy, nonatomic) NSString *errorDesc;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
