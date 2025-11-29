@class NSString;

@interface ScreenEffectNode : AnimateEmojiBaseNode <YYModel>

@property (nonatomic) int delay;
@property (nonatomic) unsigned long long effectVersion;
@property (retain, nonatomic) NSString *effectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;

@end
