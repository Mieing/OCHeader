@class AppBrandExtInfo, NSString, LiteAppExtInfo;

@interface GameShareCardItem : MMObject <NSCopying>

@property (retain, nonatomic) LiteAppExtInfo *liteAppExtInfo;
@property (retain, nonatomic) AppBrandExtInfo *appBrandExtInfo;
@property (retain, nonatomic) NSString *gameShareId;
@property (retain, nonatomic) NSString *shareData;
@property (retain, nonatomic) NSString *readText;
@property (nonatomic) unsigned int isExposed;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
