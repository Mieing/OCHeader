@class AWEURLModel;

@interface AWEVideoLabel : AWEBaseApiModel

@property (nonatomic) long long labelType;
@property (retain, nonatomic) AWEURLModel *labelUrl;

+ (id)labelUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
