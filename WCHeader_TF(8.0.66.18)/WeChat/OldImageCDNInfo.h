@class NSString;

@interface OldImageCDNInfo : MMObject <NSCopying>

@property (copy, nonatomic) NSString *cdnthumburl;
@property (copy, nonatomic) NSString *cdnthumbmd5;
@property (nonatomic) unsigned int cdnthumblength;
@property (nonatomic) int cdnthumbwidth;
@property (nonatomic) int cdnthumbheight;
@property (copy, nonatomic) NSString *cdnthumbaeskey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWith:(id)a0 cdnthumbmd5:(id)a1 cdnthumblength:(unsigned int)a2 cdnthumbwidth:(int)a3 cdnthumbheight:(int)a4 cdnthumbaeskey:(id)a5;
- (id)description;
- (id)toXML;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (void).cxx_destruct;

@end
