@class NSString;

@interface GameShareNameCard : MMObject <NSCopying>

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *tail;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *liteappId;
@property (copy, nonatomic) NSString *liteappPath;
@property (copy, nonatomic) NSString *liteappQuery;
@property (copy, nonatomic) NSString *liteappMinVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
