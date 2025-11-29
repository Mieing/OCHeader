@class NSString, NSArray;

@interface AWEPOIContentScoreInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *scoreText;
@property (copy, nonatomic) NSString *scoreContent;
@property (copy, nonatomic) NSArray *scoreIconList;
@property (copy, nonatomic) NSArray *scoreIconUrlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scoreIconListJSONTransformer;
+ (id)scoreIconUrlListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
