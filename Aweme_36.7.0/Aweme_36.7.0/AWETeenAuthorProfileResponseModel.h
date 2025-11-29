@class AWEUserModel;

@interface AWETeenAuthorProfileResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
