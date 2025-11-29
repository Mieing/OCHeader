@class AWECodeGenUserModel;

@interface AWECodeGenPickUserModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUserModel *basicUserInfoModel;
@property (nonatomic) long long pickTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
