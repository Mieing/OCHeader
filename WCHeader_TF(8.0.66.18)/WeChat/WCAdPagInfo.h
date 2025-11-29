@class NSString;

@interface WCAdPagInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *pagUrl;
@property (retain, nonatomic) NSString *pagMD5;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) NSString *pagThumbUrl;
@property (nonatomic) double startDelayTime;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)isValidWithThumb;
- (void).cxx_destruct;

@end
