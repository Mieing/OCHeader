@class NSString;

@interface AWEOriginalAdPreloadModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *siteId;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *resourceHTML;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
