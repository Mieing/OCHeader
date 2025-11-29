@class NSString, NSArray, NSDictionary;

@interface CachalotLayoutUIInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long cornerPosition;
@property (copy, nonatomic) NSArray *exposureRatio;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
