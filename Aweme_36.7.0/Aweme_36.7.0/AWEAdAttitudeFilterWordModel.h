@class NSString, NSArray;

@interface AWEAdAttitudeFilterWordModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *filterID;
@property (nonatomic) BOOL defaultSelected;
@property (copy, nonatomic) NSString *filterName;
@property (copy, nonatomic) NSString *filterSubTitle;
@property (nonatomic) BOOL isPositive;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSArray *subFilterWords;
@property (copy, nonatomic) NSString *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)isPositiveJSONTransformer;
+ (id)subFilterWordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)dictionaryValue;

@end
