@class IESECGetExplainProductDataModel;

@interface IESECGetExplainProductResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESECGetExplainProductDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
