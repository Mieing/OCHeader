@class MMMusicShareItem, MMMusicMVSongInfo;

@interface MMMusicVideoStatusOpenParams : NSObject

@property (retain, nonatomic) MMMusicMVSongInfo *mvSongInfo;
@property (retain, nonatomic) MMMusicShareItem *shareItem;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

- (id)toXML;
- (void).cxx_destruct;

@end
