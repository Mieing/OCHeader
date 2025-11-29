@class NSString, IESIMCodeGenMoreGroupDataModel, IESIMCodeGenVerifyShareDataModel;

@interface IESIMCodeGenV1IMGroupVerifyShareResponseModel : AWEBaseDataModel

@property (nonatomic) int statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) IESIMCodeGenVerifyShareDataModel *dataModel;
@property (retain, nonatomic) IESIMCodeGenMoreGroupDataModel *moreGroupDataModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
