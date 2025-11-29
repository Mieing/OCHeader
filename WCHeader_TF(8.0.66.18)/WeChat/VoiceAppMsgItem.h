@class NSString;

@interface VoiceAppMsgItem : MMObject <NSCopying>

@property (retain, nonatomic) NSString *voiceurl;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *voicemd5;
@property (nonatomic) long long length;
@property (nonatomic) long long playtime;
@property (nonatomic) long long format;
@property (retain, nonatomic) NSString *voice_key_words;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fromXML:(struct XmlReaderNode_t { int x0; char *x1; struct XmlReaderNode_t *x2; struct XmlReaderNode_t *x3; struct XmlReaderNode_t *x4; struct XmlReaderNode_t **x5; struct XmlReaderAttr_t *x6; struct XmlReaderAttr_t **x7; int x8; } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
