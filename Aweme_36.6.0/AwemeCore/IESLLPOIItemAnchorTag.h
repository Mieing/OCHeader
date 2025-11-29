@class NSString, NSDictionary, IESLLPOIItemAnchorTagServiceIconModel, NSArray, IESLLifeURLModel;

@interface IESLLPOIItemAnchorTag : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *originContent;
@property (copy, nonatomic) NSDictionary *poi_cachedDictionary;
@property (copy, nonatomic) IESLLifeURLModel *poi_cachedURL;
@property (retain, nonatomic) IESLLPOIItemAnchorTagServiceIconModel *poi_cachedContentModel;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *elements;
@property (nonatomic) long long minLen;
@property (copy, nonatomic) NSString *grayLabelBackgroundColor;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long textSize;
@property (nonatomic) long long iconWidth;
@property (nonatomic) long long iconHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)poi_URLModel;
- (id)poi_serviceTag;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)a0;

@end
