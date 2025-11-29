@class NSArray;

@interface IESECFeedSearchBannerResponseModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
