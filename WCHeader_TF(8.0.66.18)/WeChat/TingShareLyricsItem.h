@class MMListenItem, TingShareLyricsContext;

@interface TingShareLyricsItem : WXPBGeneratedMessage <NSCopying, NSCoding>

@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) TingShareLyricsContext *lyricsContent;

+ (id)xmlTagCustomFromXMLProcesslistForConfigTag:(id)a0;
+ (id)xmlTagCustomToXMLProcesslistForConfigTag:(id)a0;
+ (id)itemFromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
+ (void)initialize;

- (void)setLyricsContent:(id)a0;
- (id)lyricsContent;
- (void)setListenItem:(id)a0;
- (id)listenItem;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toXML:(id)a0;
- (id)toTingItem;
- (id)titleShowText;

@end
