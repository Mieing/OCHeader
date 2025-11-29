@class NSString, NSNumber;

@interface IESGCPCgDownloadMediaToAlbumParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *mediaType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
