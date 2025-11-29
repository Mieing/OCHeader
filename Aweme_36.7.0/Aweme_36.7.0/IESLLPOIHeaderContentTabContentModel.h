@class NSString, NSArray;

@interface IESLLPOIHeaderContentTabContentModel : IESLLifeBaseApiModel

@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSArray *photos;
@property (copy, nonatomic) NSString *subTabPageSymbol;
@property (copy, nonatomic) NSString *anchorTabId;

+ (id)photosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
