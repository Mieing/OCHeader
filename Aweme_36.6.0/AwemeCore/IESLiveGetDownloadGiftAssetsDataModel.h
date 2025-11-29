@class NSNumber, NSString;

@interface IESLiveGetDownloadGiftAssetsDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *path;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
