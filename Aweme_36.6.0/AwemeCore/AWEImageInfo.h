@class AWEURLModel;

@interface AWEImageInfo : AWEBaseApiModel

@property (nonatomic) long long height;
@property (nonatomic) long long width;
@property (retain, nonatomic) AWEURLModel *large;
@property (retain, nonatomic) AWEURLModel *thumb;

+ (id)largeJSONTransformer;
+ (id)thumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
