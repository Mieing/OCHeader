@class NSString, NSArray;

@interface WCAdOpenAppHalfScreenInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *appIcon;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *tips1;
@property (retain, nonatomic) NSString *tips2;
@property (retain, nonatomic) NSString *btnTitle;
@property (nonatomic) BOOL expandClickArea;
@property (nonatomic) BOOL forbidTapBgToClose;
@property (nonatomic) BOOL buttonWiderStyle;
@property (nonatomic) int style;
@property (retain, nonatomic) NSString *appDesc;
@property (retain, nonatomic) NSArray *appImageList;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
