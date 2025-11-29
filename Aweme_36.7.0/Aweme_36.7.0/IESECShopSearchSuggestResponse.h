@class NSArray, NSString, IESECShopSearchSuggestQueryRecord;

@interface IESECShopSearchSuggestResponse : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *suggestItems;
@property (copy, nonatomic) NSString *imprID;
@property (copy, nonatomic) IESECShopSearchSuggestQueryRecord *queryRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
