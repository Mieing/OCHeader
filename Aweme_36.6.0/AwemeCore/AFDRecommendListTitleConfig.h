@class NSString;

@interface AFDRecommendListTitleConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *titleNegative;
@property (retain, nonatomic) NSString *titlePositive;
@property (retain, nonatomic) NSString *changeSetting;
@property (retain, nonatomic) NSString *bottomContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
