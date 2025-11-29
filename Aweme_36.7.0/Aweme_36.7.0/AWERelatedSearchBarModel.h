@class NSString, NSNumber, AWEURLModel;

@interface AWERelatedSearchBarModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCheckedBrandWord;
@property (nonatomic) BOOL isBrandWord;
@property (retain, nonatomic) AWEURLModel *searchIcon;
@property (copy, nonatomic) NSString *guideText;
@property (copy, nonatomic) NSString *queryWord;
@property (retain, nonatomic) NSNumber *jumpType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *queryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
