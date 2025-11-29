@class NSArray, NSString;

@interface AWEGoodsArticleInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *pdtTags;
@property (copy, nonatomic) NSString *pdtDescSecond;
@property (copy, nonatomic) NSString *pdtDescThird;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pdtTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
