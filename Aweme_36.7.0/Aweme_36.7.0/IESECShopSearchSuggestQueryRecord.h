@class NSString;

@interface IESECShopSearchSuggestQueryRecord : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *wordsSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
