@class NSString, AWEURLModel;

@interface AWEDiscoverCoverModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *dynamicCover;
@property (retain, nonatomic) AWEURLModel *originCover;
@property (copy, nonatomic) NSString *awemeID;

+ (id)originCoverJSONTransformer;
+ (id)dynamicCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
