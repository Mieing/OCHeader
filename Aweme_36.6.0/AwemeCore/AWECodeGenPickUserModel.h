@class AWECodeGenUserModel;

@interface AWECodeGenPickUserModel : AWEBaseDataModel

@property (readonly, nonatomic) AWECodeGenUserModel *basicUserInfoModel;
@property (readonly, nonatomic) long long pickTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
