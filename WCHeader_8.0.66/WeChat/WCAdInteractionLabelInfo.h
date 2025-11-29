@class NSString, NSArray;

@interface WCAdInteractionLabelInfo : NSObject <NSCoding>

@property (nonatomic) long long interactionType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *themeColor;
@property (nonatomic) double themeColorAlpha;
@property (retain, nonatomic) NSArray *rollingLabels;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
