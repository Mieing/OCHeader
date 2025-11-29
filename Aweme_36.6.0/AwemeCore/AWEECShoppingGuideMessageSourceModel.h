@class NSString, NSDictionary;

@interface AWEECShoppingGuideMessageSourceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rawQuery;
@property (copy, nonatomic) NSString *queryText;
@property (copy, nonatomic) NSDictionary *queryExtra;
@property (copy, nonatomic) NSString *queryType;
@property (copy, nonatomic) NSString *queryTextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
