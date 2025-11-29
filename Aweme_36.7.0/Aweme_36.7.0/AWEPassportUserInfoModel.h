@class NHAccountUser, AWEPassportDeleteBlockModel, NSDictionary;

@interface AWEPassportUserInfoModel : DYAPassportResponseModel

@property (retain, nonatomic) NHAccountUser *userInfo;
@property (retain, nonatomic) AWEPassportDeleteBlockModel *blockInfo;
@property (copy, nonatomic) NSDictionary *rawData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
