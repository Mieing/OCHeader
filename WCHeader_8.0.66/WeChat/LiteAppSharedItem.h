@class NSString, ImageConf, OldImageCDNInfo;

@interface LiteAppSharedItem : MMObject <NSCopying>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) unsigned int sourceType;
@property (copy, nonatomic) NSString *minVersion;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) BOOL hideIcon;
@property (nonatomic) BOOL forbidForward;
@property (copy, nonatomic) ImageConf *imageConf;
@property (copy, nonatomic) OldImageCDNInfo *oldImageCDNInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void)initAndOverrideCDNInfo:(id)a0 node:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a1;
- (BOOL)isAsk;
- (BOOL)isAISearch;
- (BOOL)enableNewImageCard;
- (void).cxx_destruct;

@end
