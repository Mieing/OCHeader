@class NSString, NSArray;

@interface WXGameWidgetNode : NSObject

@property (copy, nonatomic) NSString *viewClassName;
@property (copy, nonatomic) NSString *nodeId;
@property (copy, nonatomic) NSString *onClick;
@property (retain, nonatomic) NSArray *layouts;
@property (retain, nonatomic) NSArray *viewAttrs;
@property (retain, nonatomic) NSArray *childNodes;
@property (nonatomic) unsigned long long dynamicSizeStyle;

+ (id)loadNodeWithXMLFile:(id)a0;
+ (id)buildNodeWithXmlElement:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)buildViewTreeWithBaseView:(id)a0;
- (void).cxx_destruct;

@end
