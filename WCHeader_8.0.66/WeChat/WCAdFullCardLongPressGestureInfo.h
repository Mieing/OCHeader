@class NSString;

@interface WCAdFullCardLongPressGestureInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) unsigned long long pressStartTime;
@property (nonatomic) unsigned long long pressEndTime;
@property (nonatomic) unsigned long long minimumPressDuration;
@property (nonatomic) unsigned long long spriteDuration;
@property (retain, nonatomic) NSString *spriteImageUrl;
@property (nonatomic) long long spriteType;
@property (nonatomic) long long spriteSizeType;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (BOOL)isValidForSpriteAnimation;
- (void).cxx_destruct;

@end
