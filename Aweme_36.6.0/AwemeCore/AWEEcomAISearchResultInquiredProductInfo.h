@class NSString;

@interface AWEEcomAISearchResultInquiredProductInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *mainPicUrl;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *preSearchId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
