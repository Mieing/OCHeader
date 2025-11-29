@class NSString, IESAccountPassportCodeGenPassportUserInfoDataModel;

@interface IESAccountPassportCodeGenPassportAccountListResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *message;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) IESAccountPassportCodeGenPassportUserInfoDataModel *dataModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
