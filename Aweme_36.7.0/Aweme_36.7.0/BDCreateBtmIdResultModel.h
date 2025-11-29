@class BDCreateBtmIdDataModel;

@interface BDCreateBtmIdResultModel : IESLiveBridgeModel

@property (retain, nonatomic) BDCreateBtmIdDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
