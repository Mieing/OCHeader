@interface WCAdPreloadConfigInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) BOOL forbidTimelinePreload;
@property (nonatomic) int timelinePreloadRatio;
@property (nonatomic) BOOL forbidCanvasPreload;
@property (nonatomic) int canvasPreloadRatio;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithConfig:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)parseConfig:(id)a0;
- (BOOL)isTimelinePreloadRatioValid;
- (BOOL)isCanvasPreloadRatioValid;

@end
