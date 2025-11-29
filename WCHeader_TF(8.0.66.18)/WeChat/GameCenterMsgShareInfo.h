@class NSString;

@interface GameCenterMsgShareInfo : NSObject

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) int thumbWidth;
@property (nonatomic) int thumbHeight;
@property (nonatomic) BOOL shouldScale;

+ (id)parseFromXml:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (void).cxx_destruct;

@end
