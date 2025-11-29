@class NSString, NSArray;

@interface AWECodeGenSelectPickUserInfoModel : AWEBaseDataModel

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *userIconUri;
@property (copy, nonatomic) NSArray *userIconUrlArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
