@class AWEDemaciaPlayTokenAuthModel;

@interface AWENoxusLongVideoTokenResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEDemaciaPlayTokenAuthModel *tokenAuth;

+ (id)tokenAuthJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
