@class AWEUserModel;

@interface AWEBarrageDiggModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
