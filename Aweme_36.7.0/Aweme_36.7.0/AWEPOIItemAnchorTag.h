@class NSString, NSDictionary, AWEPOIItemAnchorTagServiceIconModel, NSArray, AWEURLModel;

@interface AWEPOIItemAnchorTag : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL poiIsLiving;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL showIcon;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) BOOL poi_shouldAddSeparatorLineAhead;
@property (nonatomic) BOOL poi_shouldBeShown;
@property (nonatomic) double poi_width;
@property (nonatomic) double poi_leftMargin;
@property (nonatomic) BOOL poi_shouldBeCompress;
@property (retain, nonatomic) NSString *poi_iconImageURL;
@property (readonly, nonatomic) double widthWithLeftMargin;
@property (copy, nonatomic) NSString *originContent;
@property (copy, nonatomic) NSDictionary *poi_cachedDictionary;
@property (copy, nonatomic) AWEURLModel *poi_cachedURL;
@property (retain, nonatomic) AWEPOIItemAnchorTagServiceIconModel *poi_cachedContentModel;
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
