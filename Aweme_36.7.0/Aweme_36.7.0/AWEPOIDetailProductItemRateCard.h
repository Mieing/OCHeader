@class NSString, NSArray;

@interface AWEPOIDetailProductItemRateCard : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSArray *rateGrades;
@property (copy, nonatomic) NSString *couponDesc;
@property (copy, nonatomic) NSArray *expGroups;
@property (copy, nonatomic) NSString *schemeURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rateGradesJSONTransformer;
+ (id)expGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hitEntranceFiveStarAB;
- (BOOL)hitEntranceFiveStarABWithAnimation;
- (void).cxx_destruct;

@end
