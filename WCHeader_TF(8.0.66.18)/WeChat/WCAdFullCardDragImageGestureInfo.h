@class NSString;

@interface WCAdFullCardDragImageGestureInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) int basicRemWidth;
@property (retain, nonatomic) NSString *srcDisplayRectStr;
@property (retain, nonatomic) NSString *destDisplayRectStr;
@property (retain, nonatomic) NSString *srcHitRectStr;
@property (retain, nonatomic) NSString *destHitRectStr;
@property (nonatomic) unsigned long long dragStartTime;
@property (nonatomic) unsigned long long dragEndTime;
@property (retain, nonatomic) NSString *imageUrl;
@property (nonatomic) double relatedWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } srcDisplayRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destDisplayRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } srcHitRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destHitRect;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })parseRectString:(id)a0;
- (double)parseNumberStr:(id)a0 basicWidth:(int)a1 relatedWidth:(double)a2;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
