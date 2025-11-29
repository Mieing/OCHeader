@class NSString, AWEIESMediaIDLCodeGenUrlTypeModel;

@interface AWEIESMediaIDLCodeGenUserInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEIESMediaIDLCodeGenUrlTypeModel *iconUrlModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
