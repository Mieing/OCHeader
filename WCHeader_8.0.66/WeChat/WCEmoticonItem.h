@class NSString;

@interface WCEmoticonItem : NSObject <NSCoding, NSCopying, PBCoding>

@property (retain, nonatomic) NSString *emoticonMd5;
@property (retain, nonatomic) NSString *emoticonSearchKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_emoticonMd5;
+ (void)PBArrayAdd_emoticonSearchKey;
+ (void)initialize;
+ (id)genItemListFromEditImageAttr:(id)a0;
+ (id)genListXmlFromEditImageAttr:(id)a0;
+ (id)genItemListFromListXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)genListXmlFromItemList:(id)a0;
+ (id)fromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)_getNameFromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (id)_getChildStringForKey:(const char *)a0 fromXmlNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
+ (id)_getStringFromCharSeq:(const char *)a0;

- (id)getPBPropertyTable;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toXml;
- (void).cxx_destruct;

@end
