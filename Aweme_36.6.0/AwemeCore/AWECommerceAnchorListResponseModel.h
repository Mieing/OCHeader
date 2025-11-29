@class NSArray, NSString;

@interface AWECommerceAnchorListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *anchorList;
@property (copy, nonatomic) NSString *registerRegion;

+ (id)anchorListJSONTransformer;
+ (id)AIAnchorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
