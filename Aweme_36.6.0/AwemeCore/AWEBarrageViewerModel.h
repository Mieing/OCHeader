@class AWEUserModel;

@interface AWEBarrageViewerModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
