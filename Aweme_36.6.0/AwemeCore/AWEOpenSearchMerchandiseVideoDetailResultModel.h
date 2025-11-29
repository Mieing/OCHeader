@class NSNumber, NSDictionary, AWEOpenSearchMerchandiseVideoDetailDataModel;

@interface AWEOpenSearchMerchandiseVideoDetailResultModel : IESLiveBridgeModel

@property (retain, nonatomic) AWEOpenSearchMerchandiseVideoDetailDataModel *data;
@property (retain, nonatomic) NSNumber *productCardIndex;
@property (copy, nonatomic) NSDictionary *innerLoadMoreInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
