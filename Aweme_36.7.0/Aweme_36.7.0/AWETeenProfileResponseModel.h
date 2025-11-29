@class AWEUserModel;

@interface AWETeenProfileResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long age;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
