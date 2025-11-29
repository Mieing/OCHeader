@class NSString, AWEStoryColor, AWEStoryFontModel;

@interface ACCTemplateTextClipContentModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *defaultContent;
@property (retain, nonatomic) AWEStoryColor *fontColor;
@property (retain, nonatomic) AWEStoryFontModel *fontModel;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) long long alignmentType;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fontColorJSONTransformer;
+ (id)fontModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
