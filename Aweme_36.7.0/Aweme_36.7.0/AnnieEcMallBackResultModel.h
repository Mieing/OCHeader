@class AnnieEcMallBackDataModel;

@interface AnnieEcMallBackResultModel : IESLiveBridgeModel

@property (retain, nonatomic) AnnieEcMallBackDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
