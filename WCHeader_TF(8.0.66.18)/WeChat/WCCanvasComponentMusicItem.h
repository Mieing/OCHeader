@class NSString;

@interface WCCanvasComponentMusicItem : MMObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) NSString *voiceUrl;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *bgColor;
@property (nonatomic) double bgColorAlpha;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isDarkColor;
@property (nonatomic) double musicDuration;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
