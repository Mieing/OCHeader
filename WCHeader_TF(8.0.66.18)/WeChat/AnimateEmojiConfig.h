@class NSMutableDictionary;

@interface AnimateEmojiConfig : AnimateEmojiBaseNode

@property (nonatomic) unsigned long long emojiAnimVersion;
@property (retain, nonatomic) NSMutableDictionary *nodes;

+ (id)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0 resDir:(id)a1;
+ (id)fromConfigPath:(id)a0 resDir:(id)a1;
+ (id)xmlFileName;

- (id)init;
- (id)debugDescription;
- (void).cxx_destruct;

@end
