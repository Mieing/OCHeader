@class NSString;

@interface IESLiveOpenMultiSelectPhotoLibrarySelectedPhotoArrayModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *rawDataWithBase64;
@property (copy, nonatomic) NSString *thumbnailWithBase64;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
