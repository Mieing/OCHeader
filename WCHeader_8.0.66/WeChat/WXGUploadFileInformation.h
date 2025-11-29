@class NSString;

@interface WXGUploadFileInformation : NSObject

@property (copy, nonatomic) NSString *rtxName;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileDescription;

+ (id)uploadFileInformationWithXMl:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void).cxx_destruct;

@end
