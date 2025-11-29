@class AWEEccsSetMessageExtDataModel;

@interface AWEEccsSetMessageExtResultModel : IESLiveBridgeModel

@property (retain, nonatomic) AWEEccsSetMessageExtDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
