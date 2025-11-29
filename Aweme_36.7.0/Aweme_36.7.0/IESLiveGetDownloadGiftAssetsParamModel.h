@class NSNumber, NSString;

@interface IESLiveGetDownloadGiftAssetsParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *assetId;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSNumber *priority;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
