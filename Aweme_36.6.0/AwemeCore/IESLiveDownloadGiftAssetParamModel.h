@class NSArray, NSNumber;

@interface IESLiveDownloadGiftAssetParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *assetsIds;
@property (retain, nonatomic) NSNumber *priority;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
