@class NSArray;

@interface AWEDislikePanelUpdateResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *dislikeDimensionListModelArray;

+ (id)dislikeDimensionListModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
