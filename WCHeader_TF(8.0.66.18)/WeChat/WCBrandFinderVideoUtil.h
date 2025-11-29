@interface WCBrandFinderVideoUtil : NSObject

+ (id)parseFinderShareItemWithXml:(id)a0 rootTag:(id)a1;
+ (void)jumpToFinderVideoPlayerWithShareItem:(id)a0 currentNavController:(id)a1 enterScene:(unsigned int)a2;
+ (id)genFinderFeedXmlFromNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

@end
