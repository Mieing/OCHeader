@class NSString;

@interface WCAdSocialLikeAttractingInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) unsigned long long interval;
@property (retain, nonatomic) NSString *pagUrl;
@property (retain, nonatomic) NSString *pagMD5;
@property (nonatomic) double offsetY;
@property (retain, nonatomic) NSString *iconPagUrl;
@property (retain, nonatomic) NSString *iconPagMD5;
@property (retain, nonatomic) NSString *iconPagDarkUrl;
@property (retain, nonatomic) NSString *iconPagDarkMD5;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)fetchIconPagUrl:(id *)a0 pagMD5:(id *)a1;
- (void).cxx_destruct;

@end
