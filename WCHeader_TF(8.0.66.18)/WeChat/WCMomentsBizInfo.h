@class NSString;

@interface WCMomentsBizInfo : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *encodedExcerptUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_encodedExcerptUrl;
+ (void)initialize;
+ (id)fromXMLParentNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)getPBPropertyTable;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)openUrl;
- (BOOL)canShowOriginalArticleSource;
- (id)toXML;
- (void).cxx_destruct;

@end
