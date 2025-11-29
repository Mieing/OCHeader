@class NSString, ScreenEffectNode;

@interface AnimateEmojiNode : AnimateEmojiBaseNode <YYModel>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *animFile;
@property (retain, nonatomic) ScreenEffectNode *screenEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 resDir:(id)a1;

@end
