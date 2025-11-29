@class AWEUlikeAccountAuthModel;

@interface AWEUlikeAccountAuthResponseModel : ACCBaseApiModel

@property (retain, nonatomic) AWEUlikeAccountAuthModel *authInfo;

+ (id)authInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
