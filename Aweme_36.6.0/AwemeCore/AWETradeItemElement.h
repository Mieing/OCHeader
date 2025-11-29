@class NSString;

@interface AWETradeItemElement : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL poi_shouldAddSeparatorLineAhead;
@property (nonatomic) double poi_width;
@property (nonatomic) double poi_miniumWidth;
@property (nonatomic) double poi_leftMargin;
@property (nonatomic) BOOL poi_shouldBeCompress;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL poi_isLastElementInGroup;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL poi_canBeCompressToZero;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long minLen;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long textSize;
@property (nonatomic) long long iconWidth;
@property (nonatomic) long long iconHeight;
@property (nonatomic) long long anchorContentElementType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
