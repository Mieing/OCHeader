@class NSString;

@interface WCAdContinuousLikeButtonInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleColorLight;
@property (retain, nonatomic) NSString *titleColorDark;
@property (retain, nonatomic) NSString *iconLight;
@property (retain, nonatomic) NSString *iconDark;
@property (retain, nonatomic) NSString *bgColorLight;
@property (retain, nonatomic) NSString *bgColorDark;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (id)fetchTitleColor;
- (id)fetchIconUrl;
- (id)fetchBgColor;
- (void).cxx_destruct;

@end
