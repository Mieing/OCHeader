@class IESECEcVerifyReportErrorContentModel, NSNumber;

@interface IESECEcVerifyReportParamModel : IESLiveBridgeModel

@property (retain, nonatomic) IESECEcVerifyReportErrorContentModel *errorContent;
@property (retain, nonatomic) NSNumber *localRemindType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
