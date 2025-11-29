@class WCAdBreakFramePlayStateInfo;

@interface WCAdVideoPlayModeInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (nonatomic) int playMode;
@property (nonatomic) double startOffset;
@property (nonatomic) double loopStartTime;
@property (nonatomic) double loopEndTime;
@property (retain, nonatomic) WCAdBreakFramePlayStateInfo *playStateInfo;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
