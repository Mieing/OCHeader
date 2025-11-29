@class IESIMUGCodeGenAwemeUgGeneralColdStartResponseDataModel, IESIMUGCodeGenExtraModel;

@interface IESIMUGCodeGenAwemeUgGeneralColdStartResponseModel : AWEBaseResponseModel

@property (retain, nonatomic) IESIMUGCodeGenAwemeUgGeneralColdStartResponseDataModel *dataModel;
@property (retain, nonatomic) IESIMUGCodeGenExtraModel *extraModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
