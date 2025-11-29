@class NSString;

@interface WCAdTouchParticleInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) int basicRemWidth;
@property (nonatomic) int basicRootFontSize;
@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) double imgWidth;
@property (nonatomic) double imgHeight;
@property (nonatomic) long long birthRateType;
@property (nonatomic) double scale;
@property (nonatomic) double scaleRange;
@property (nonatomic) double scaleSpeed;
@property (nonatomic) double alphaRange;
@property (nonatomic) double lifetime;
@property (nonatomic) double velocity;
@property (nonatomic) double velocityRange;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
