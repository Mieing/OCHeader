@class WCAdDynamicFeedConfigInfo, NSArray, WCAdDynamicFeedTemplateExtraInfo, WCAdDynamicFeedDynamicInfluentDataInfo, WCAdDynamicFeedElementInfo;

@interface WCAdDynamicFeedInfo : NSObject <NSCoding>

@property (retain, nonatomic) WCAdDynamicFeedElementInfo *rootElementInfo;
@property (retain, nonatomic) NSArray *animations;
@property (retain, nonatomic) WCAdDynamicFeedConfigInfo *configInfo;
@property (retain, nonatomic) WCAdDynamicFeedTemplateExtraInfo *templateExtraInfo;
@property (retain, nonatomic) WCAdDynamicFeedDynamicInfluentDataInfo *dynamicUpdateInfluentData;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 basicWidth:(int)a1 basicRootFontSize:(int)a2 influentData:(id)a3;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)isVersionValid;
- (BOOL)isContainerClickableWith:(id)a0;
- (void)processWithInfluentData:(id)a0;
- (BOOL)updateDynamicFeedInfoWithNewInfluentData:(id)a0 basicWidth:(int)a1 basicRootFontSize:(int)a2;
- (void).cxx_destruct;

@end
