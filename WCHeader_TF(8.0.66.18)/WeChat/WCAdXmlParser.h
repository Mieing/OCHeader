@interface WCAdXmlParser : NSObject

+ (BOOL)SetAdvertiseInfo:(id)a0 ByAdInfo:(id)a1;
+ (BOOL)SetAdvertiseInfo:(id)a0 ByAdInfoXml:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (BOOL)setAdCanvasExtXml:(id)a0 ByXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (BOOL)setSKAdItems:(id)a0 byXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (BOOL)SetAdvertiseXml:(id)a0 ByAdXml:(id)a1;
+ (void)setAdCanvasInfo:(id)a0 byXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (void)setAdCanvasPage:(id)a0 byXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1 withSizeType:(long long)a2 basicWidth:(int)a3 basicRootFontSize:(int)a4 widthRoundingType:(long long)a5 heightRoundingType:(long long)a6;
+ (void)setCanvasComponentItem:(id)a0 byXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1 withSizeType:(long long)a2 basicWidth:(int)a3 basicRootFontSize:(int)a4 widthRoundingType:(long long)a5 heightRoundingType:(long long)a6;
+ (void)parseFloatActionBaseInfo:(id)a0 canvasComponentItem:(id)a1 fromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a2 withSizeType:(long long)a3 basicWidth:(int)a4 basicRootFontSize:(int)a5 widthRoundingType:(long long)a6 heightRoundingType:(long long)a7;
+ (id)videoFloatBarInfoFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 withSizeType:(long long)a1 basicWidth:(int)a2 basicRootFontSize:(int)a3 widthRoundingType:(long long)a4 heightRoundingType:(long long)a5;
+ (id)clickActionInfoFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 childName:(const char *)a1;
+ (id)getClickActionInfoFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)getLiveCheerIconInfoListFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (BOOL)ExtractRecommendMetaInfo:(id)a0 ByRecXml:(id)a1;
+ (BOOL)ExtractRecommendAdInfo:(id)a0 ByAdMsgXml:(id)a1;
+ (id)adXmlCanvasNodeFilterArray;
+ (id)filterUselessCanvasNodeForType:(id)a0 fromOriginAdXml:(id)a1;
+ (id)filterUselessXmlNodesForForwardWithAdXml:(id)a0;
+ (id)replaceXMLNode:(id)a0 toNode:(id)a1 forString:(id)a2;
+ (int)parseBasicWidthForName:(const char *)a0 parent:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (int)parseBasicFontSizeForName:(const char *)a0 parent:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (int)fetchBasicWidthWithInfo:(id)a0;
+ (int)fetchBasicFontSizeWithInfo:(id)a0;
+ (int)parseNonZeroIntValueForName:(const char *)a0 parent:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1 defaultValue:(int)a2;
+ (double)parseRoundingSizeForName:(const char *)a0 parent:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1 basicWidth:(int)a2 basicFontSize:(int)a3;
+ (double)parseFloatSizeForName:(const char *)a0 parent:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1 basicWidth:(int)a2 basicFontSize:(int)a3;
+ (id)fetchValueFromXml:(id)a0 inSearchPath:(id)a1;
+ (long long)extractNumberFromBrackets:(id)a0;

@end
