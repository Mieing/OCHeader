@class NSNumber, NSString, AWEURLModel;

@interface AWEUserBrandInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (retain, nonatomic) NSNumber *brandID;
@property (copy, nonatomic) NSString *brandName;
@property (retain, nonatomic) AWEURLModel *logoURL;
@property (retain, nonatomic) NSNumber *heat;
@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) NSNumber *rankDiff;
@property (copy, nonatomic) NSString *tagName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logoURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
