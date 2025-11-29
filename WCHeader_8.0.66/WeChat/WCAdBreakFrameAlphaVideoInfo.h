@class WCMediaItem, WCAdVideoPlayModeInfo;

@interface WCAdBreakFrameAlphaVideoInfo : NSObject <NSCoding, WCAdParserProtocol>

@property (retain, nonatomic) WCAdVideoPlayModeInfo *playModeInfo;
@property (nonatomic) int videoCompositeType;
@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) WCMediaItem *oneToOneHighMediaItem;
@property (retain, nonatomic) WCMediaItem *oneToOneLowMediaItem;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)fetchBreakFrameMediaId;
- (id)fetchAvailableMediaItem;
- (void).cxx_destruct;

@end
