@class NSString, AWEUserModel;

@interface AWEBarrageGoldLikeModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *text;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
