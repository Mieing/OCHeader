@class NSString;

@interface ScanCodeHistoryItem : MMObject

@property (copy, nonatomic) NSString *codeUrl;
@property (copy, nonatomic) NSString *timeString;
@property (nonatomic) int fromScene;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int version;
@property (nonatomic) BOOL isFromAlbum;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL isFromCombineTab;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
