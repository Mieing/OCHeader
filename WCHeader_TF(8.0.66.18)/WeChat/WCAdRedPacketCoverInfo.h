@class NSString;

@interface WCAdRedPacketCoverInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *receiveUri;
@property (retain, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSString *coverUrl;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
