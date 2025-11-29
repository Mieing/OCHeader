@class NSArray, NSString;

@interface AFDGuideRecommendTagBlockListConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *likeBlockList;
@property (copy, nonatomic) NSArray *playFinishBlockList;
@property (copy, nonatomic) NSArray *shareBlockList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
