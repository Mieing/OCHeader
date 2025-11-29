@class NSArray, NSString;

@interface IESECShopTopSearchInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *words;
@property (copy, nonatomic) NSArray *carouselWords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsJSONTransformer;
+ (id)carouselWordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
