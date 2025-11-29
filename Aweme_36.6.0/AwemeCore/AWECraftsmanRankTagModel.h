@class NSString, NSNumber;

@interface AWECraftsmanRankTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *cityShortName;
@property (copy, nonatomic) NSString *career;
@property (copy, nonatomic) NSString *rankType;
@property (copy, nonatomic) NSNumber *rankIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
