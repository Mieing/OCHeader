@class NSString, NSArray, NSDictionary;

@interface AWEECShareBenefitInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitleHigh;
@property (copy, nonatomic) NSString *landPage;
@property (copy, nonatomic) NSString *landPageDec;
@property (copy, nonatomic) NSString *groupInfo;
@property (copy, nonatomic) NSArray *benefitPoint;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *editText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)benefitPointJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
