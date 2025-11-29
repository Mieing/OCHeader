@class NSString;

@interface WAVideoPageInfo : MMObject

@property (nonatomic) struct CGSize { double width; double height; } thumbImageSize;
@property (copy, nonatomic) NSString *videoSource;
@property (copy, nonatomic) NSString *appThumbUrl;
@property (nonatomic) BOOL isFromOpenSDK;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
