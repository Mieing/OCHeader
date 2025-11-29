@class NSString;

@interface MMEasterEggNativeWeAppActivityInfo : MMEasterEggBaseActivityInfo

@property (retain, nonatomic) NSString *weAppUsername;

+ (id)activityNodeName;

- (Class)activityClass;
- (id)accessibilityLabel;
- (id)description;
- (id)initWithActivityNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 directoryPath:(id)a1 clientEggVersion:(unsigned long long)a2;
- (void)tryParseWeAppUsernameFromActivityNode:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
